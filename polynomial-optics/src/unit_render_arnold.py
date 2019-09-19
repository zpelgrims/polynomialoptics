#TODO: need to build lens before lens render test obviously
#TODO: enum value can't be found, yet they match name wise.. 

import os
import sys
import json
import math

# append path if not found
try:
    sys.path.index('/Users/zeno/Arnold-5.4.0.1-darwin/python')
except ValueError:
    sys.path.append('/Users/zeno/Arnold-5.4.0.1-darwin/python')

from arnold import *


car_ass = "/Users/zeno/lentil/pota/tests/unit_render/car_template01.ass"
os.environ["UNITRENDER"] = "/Users/zeno/lentil/pota/tests/unit_render/"
mtoa_plugins = "/Applications/solidangle/mtoa/2018/plugins"
cpp_lenses_enum_def = "/Users/zeno/lentil/pota/include/auto_generated_lens_includes/pota_cpp_lenses.h"


def unit_render_lens(lensdict, lentil=True):

    AiBegin()
    AiLoadPlugins(mtoa_plugins)
    AiMsgSetConsoleFlags(AI_LOG_ALL);
    AiASSLoad(car_ass)

    if lentil:
        node_camera = AiNodeLookUpByName('rendercamLentilShape')
        if node_camera is not None and AiNodeIs(node_camera, 'lentil') == True:
            param_entry = AiNodeEntryLookUpParameter(AiNodeEntryLookUp("lentil"), "lensModel")
            enum = AiParamGetEnum(param_entry)
            enum_index = AiEnumGetValue(enum, lensdict["lens_name_for_enum_find"])
            AiNodeSetInt(node_camera, 'lens_model', enum_index)
    else:
        sensor_width = 36.0
        fov = 2 * math.atan(sensor_width / 2*lensdict["focallength"])
        node_thinlens = AiNodeLookUpByName('rendercamShape')
        if node_thinlens is not None and AiNodeIs(node_thinlens, 'persp_camera') == True:
            AiNodeSetFlt(node_thinlens, 'fov', fov)
    
    driver = AiNodeLookUpByName('defaultArnoldDriver@driver_png.RGBA')
    if driver is not None and AiNodeIs(driver, 'driver_png') == True:
        AiNodeSetStr(driver, 'filename', "{}-{}.png".format(lensdict["outfile"], 'lentil' if lentil else 'thinlens'))


    AiRender()
    AiEnd()


def find_lens_list_line_number(lens_name):
    for i, line in enumerate(open(cpp_lenses_enum_def)):
        if lens_name in line:
            return i


def collect_all_prod_ready_lenses(lens_json):
    lens_global_dict = {}

    with open(lens_json) as data_file:    
        lens_database = json.load(data_file)
    
    for lensid in lens_database:
        lens_dict = {}
        if lens_database[lensid]["production-ready"]:
            for focallength in lens_database[lensid]["polynomial-optics"]:

                lens_name = "{company}_{name}_{year}_{focallength}mm".format(
                    company = lens_database[lensid]["company"].lower(),
                    name = lens_database[lensid]["product-name"].lower(),
                    year = lens_database[lensid]["year"],
                    focallength = focallength)
                

                outfile = "{}/database/lenses/{}-{}-{}/{}/unit-render-{}".format(os.environ['LENTIL_PATH'],
                                                          lens_database[lensid]["year"],
                                                          lens_database[lensid]["company"],
                                                          lens_database[lensid]["product-name"],
                                                          focallength,
                                                          lens_name)
                
                lens_dict["focallength"] = focallength
                lens_dict["lens_name"] = lens_name
                lens_dict["outfile"] = outfile

                lens_name_for_enum_find = "{company}__{name}__{year}__{focallength}mm".format(
                    company = lens_database[lensid]["company"].lower(),
                    name = lens_database[lensid]["product-name"].lower(),
                    year = lens_database[lensid]["year"],
                    focallength = focallength)

                lens_dict["lens_name_for_enum_find"] = lens_name_for_enum_find.replace("-", "_")
                
                lens_global_dict[lensid] = lens_dict
    
    return lens_global_dict



def execute():
    lenses = collect_all_prod_ready_lenses("/Users/zeno/lentil/polynomial-optics/database/lenses.json")
    for lensid, info in lenses.items():
        print(info["lens_name"])
        unit_render_lens(info, True)
        #unit_render_lens(info, False)
        return #remove

execute()