case unknown__petzval__1900__75mm:
{
const double dx00 =  + 0.451709  + 0.605618 *lambda + -0.84471 *lens_ipow(lambda, 2) + 0.409548 *lens_ipow(dy, 2) + 0.386349 *lens_ipow(dx, 2) + 0.0243639 *y*dy + 0.000226358 *lens_ipow(y, 2) + 0.0656372 *x*dx + 0.000686312 *lens_ipow(x, 2) + 0.413546 *lens_ipow(lambda, 3) + 1.34484e-05 *lens_ipow(y, 2)*lambda + -0.00448397 *x*dx*lens_ipow(lambda, 2) + -0.000124653 *lens_ipow(x, 2)*lens_ipow(lambda, 3) + -9.68204 *lens_ipow(dx, 4)*lens_ipow(lambda, 3) + -0.678222 *x*lens_ipow(dx, 3)*lens_ipow(lambda, 3) + 0.000462669 *lens_ipow(x, 3)*dx*lens_ipow(lambda, 3) + 5.53598e-06 *lens_ipow(x, 4)*lens_ipow(lambda, 3) + 1.10233e-06 *lens_ipow(x, 2)*lens_ipow(y, 4)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -7.97937e-10 *lens_ipow(x, 3)*lens_ipow(y, 5)*dx*dy + 1.35214e-13 *lens_ipow(x, 4)*lens_ipow(y, 6)+0.0f;
const double dx01 =  + 0.0174323 *y*dx + 0.0243639 *x*dy + 0.000452716 *x*y + 2.68968e-05 *x*y*lambda + -0.0591362 *dx*dy*lens_ipow(lambda, 5) + 1.46978e-06 *lens_ipow(x, 3)*lens_ipow(y, 3)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -9.97422e-10 *lens_ipow(x, 4)*lens_ipow(y, 4)*dx*dy + 1.62257e-13 *lens_ipow(x, 5)*lens_ipow(y, 5)+0.0f;
const double dx02 =  + 67.9757  + 27.9908 *lambda + -38.4836 *lens_ipow(lambda, 2) + -48.9311 *lens_ipow(dy, 2) + -147.927 *lens_ipow(dx, 2) + 0.00871613 *lens_ipow(y, 2) + 0.772698 *x*dx + 0.0328186 *lens_ipow(x, 2) + 18.5403 *lens_ipow(lambda, 3) + -0.00224199 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + -0.0591362 *y*dy*lens_ipow(lambda, 5) + -38.7282 *x*lens_ipow(dx, 3)*lens_ipow(lambda, 3) + -1.01733 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + 0.000115667 *lens_ipow(x, 4)*lens_ipow(lambda, 3) + 7.34889e-07 *lens_ipow(x, 3)*lens_ipow(y, 4)*dx*lens_ipow(dy, 2) + -1.99484e-10 *lens_ipow(x, 4)*lens_ipow(y, 5)*dy+0.0f;
const double dx03 =  + -97.8622 *dx*dy + 0.819097 *x*dy + 0.0243639 *x*y + -0.0591362 *y*dx*lens_ipow(lambda, 5) + 7.34889e-07 *lens_ipow(x, 3)*lens_ipow(y, 4)*lens_ipow(dx, 2)*dy + -1.99484e-10 *lens_ipow(x, 4)*lens_ipow(y, 5)*dx+0.0f;
const double dx04 =  + 27.9908 *dx + 0.605618 *x + -76.9671 *dx*lambda + -1.68942 *x*lambda + 55.621 *dx*lens_ipow(lambda, 2) + 1.24064 *x*lens_ipow(lambda, 2) + 1.34484e-05 *x*lens_ipow(y, 2) + -0.00448397 *lens_ipow(x, 2)*dx*lambda + -0.000124653 *lens_ipow(x, 3)*lens_ipow(lambda, 2) + -0.295681 *y*dx*dy*lens_ipow(lambda, 4) + -29.0461 *x*lens_ipow(dx, 4)*lens_ipow(lambda, 2) + -1.01733 *lens_ipow(x, 2)*lens_ipow(dx, 3)*lens_ipow(lambda, 2) + 0.000347001 *lens_ipow(x, 4)*dx*lens_ipow(lambda, 2) + 3.32159e-06 *lens_ipow(x, 5)*lens_ipow(lambda, 2)+0.0f;
const double dx10 =  + 0.0242362 *y*dx + 0.0175058 *x*dy + 0.000459324 *x*y + 1.17561e-05 *x*y*lambda + -6.52157e-07 *x*lens_ipow(y, 3)*lens_ipow(dy, 2) + 0.0001763 *x*lens_ipow(y, 3)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -1.28843e-07 *lens_ipow(x, 2)*lens_ipow(y, 4)*dx*dy + 2.34413e-11 *lens_ipow(x, 3)*lens_ipow(y, 5)+0.0f;
const double dx11 =  + 0.453095  + 0.596397 *lambda + -0.82708 *lens_ipow(lambda, 2) + 0.424846 *lens_ipow(dy, 2) + 0.407672 *lens_ipow(dx, 2) + 0.0661718 *y*dy + 0.00067849 *lens_ipow(y, 2) + 0.0242362 *x*dx + 0.000229662 *lens_ipow(x, 2) + 0.402512 *lens_ipow(lambda, 3) + 3.80702e-05 *lens_ipow(y, 2)*lambda + 5.87805e-06 *lens_ipow(x, 2)*lambda + -0.0240782 *lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -0.00370033 *lens_ipow(y, 2)*lens_ipow(dx, 4) + -9.78236e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 2) + -0.00916704 *lens_ipow(y, 3)*lens_ipow(dx, 2)*lens_ipow(dy, 3) + 1.04556e-05 *lens_ipow(y, 5)*lens_ipow(dx, 2)*dy + 1.29781e-07 *lens_ipow(y, 6)*lens_ipow(dx, 2) + 0.00026445 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -1.7179e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*dy + 2.93016e-11 *lens_ipow(x, 4)*lens_ipow(y, 4)+0.0f;
const double dx12 =  + -97.6789 *dx*dy + 0.815345 *y*dx + 0.0242362 *x*y + -0.00493378 *lens_ipow(y, 3)*lens_ipow(dx, 3) + -0.00458352 *lens_ipow(y, 4)*dx*lens_ipow(dy, 3) + 3.4852e-06 *lens_ipow(y, 6)*dx*dy + 3.70804e-08 *lens_ipow(y, 7)*dx + 0.0001763 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*lens_ipow(dy, 2) + -4.29475e-08 *lens_ipow(x, 3)*lens_ipow(y, 4)*dy+0.0f;
const double dx13 =  + 68.7025  + 22.5603 *lambda + -23.4562 *lens_ipow(lambda, 2) + -145.462 *lens_ipow(dy, 2) + -48.8395 *lens_ipow(dx, 2) + 0.849692 *y*dy + 0.0330859 *lens_ipow(y, 2) + 0.00875289 *lens_ipow(x, 2) + 8.60137 *lens_ipow(lambda, 4) + -0.0481563 *y*dy*lens_ipow(lambda, 2) + -6.52157e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -0.00687528 *lens_ipow(y, 4)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 1.7426e-06 *lens_ipow(y, 6)*lens_ipow(dx, 2) + 0.0001763 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -4.29475e-08 *lens_ipow(x, 3)*lens_ipow(y, 4)*dx+0.0f;
const double dx14 =  + 22.5603 *dy + 0.596397 *y + -46.9124 *dy*lambda + -1.65416 *y*lambda + 1.20754 *y*lens_ipow(lambda, 2) + 1.26901e-05 *lens_ipow(y, 3) + 5.87805e-06 *lens_ipow(x, 2)*y + 34.4055 *dy*lens_ipow(lambda, 3) + -0.0481563 *y*lens_ipow(dy, 2)*lambda+0.0f;
const double dx20 =  + -0.0262688  + 1.35489e-05 *lens_ipow(x, 2) + -0.106821 *lens_ipow(dy, 2)*lambda + -0.00320177 *y*dy*lambda + -1.22108e-05 *lens_ipow(y, 2)*lambda + -0.00283365 *x*dx*lambda + -6.71141e-05 *lens_ipow(x, 2)*lambda + 0.0957679 *lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 0.0329714 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.00289209 *y*dy*lens_ipow(lambda, 2) + 0.00211895 *x*dx*lens_ipow(lambda, 2) + 5.4994e-05 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + 1.27416e-05 *lens_ipow(y, 2)*lens_ipow(lambda, 3) + -0.000696229 *x*lens_ipow(dx, 3)*lambda + -0.0299322 *lens_ipow(dx, 2)*lens_ipow(lambda, 5)+0.0f;
const double dx21 =  + -0.0413256 *dx*dy + -0.000579307 *y*dx + -0.00320177 *x*dy*lambda + -2.44216e-05 *x*y*lambda + 0.0253482 *dx*lens_ipow(dy, 3) + 0.0182703 *lens_ipow(dx, 3)*dy + 0.00289209 *x*dy*lens_ipow(lambda, 2) + 2.54833e-05 *x*y*lens_ipow(lambda, 3)+0.0f;
const double dx22 =  + -1.62863  + 0.0245379 *lambda + -1.20846 *lens_ipow(dy, 2) + -0.0413256 *y*dy + -0.000289654 *lens_ipow(y, 2) + 10.8867 *lens_ipow(dx, 2)*lambda + -0.00141683 *lens_ipow(x, 2)*lambda + 2.09584 *lens_ipow(dy, 4) + -10.9159 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 12.9573 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 6.6487 *lens_ipow(dx, 4) + 0.0253482 *y*lens_ipow(dy, 3) + 0.054811 *y*lens_ipow(dx, 2)*dy + 0.0659428 *x*dx*lens_ipow(dy, 2) + 0.00105948 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + -0.00104434 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lambda + -0.258757 *lens_ipow(dy, 2)*lens_ipow(lambda, 5) + -0.0598644 *x*dx*lens_ipow(lambda, 5)+0.0f;
const double dx23 =  + -2.41692 *dx*dy + -0.0413256 *y*dx + -0.213642 *x*dy*lambda + -0.00320177 *x*y*lambda + 8.38337 *dx*lens_ipow(dy, 3) + 8.63817 *lens_ipow(dx, 3)*dy + 0.0760447 *y*dx*lens_ipow(dy, 2) + 0.0182703 *y*lens_ipow(dx, 3) + 0.191536 *x*dy*lens_ipow(lambda, 2) + 0.0659428 *x*lens_ipow(dx, 2)*dy + 0.00289209 *x*y*lens_ipow(lambda, 2) + -0.517514 *dx*dy*lens_ipow(lambda, 5)+0.0f;
const double dx24 =  + 0.0245379 *dx + 3.62891 *lens_ipow(dx, 3) + -0.106821 *x*lens_ipow(dy, 2) + -0.00320177 *x*y*dy + -1.22108e-05 *x*lens_ipow(y, 2) + -0.00141683 *lens_ipow(x, 2)*dx + -2.23714e-05 *lens_ipow(x, 3) + -7.27728 *lens_ipow(dx, 3)*lambda + 0.191536 *x*lens_ipow(dy, 2)*lambda + 0.00578417 *x*y*dy*lambda + 0.00211895 *lens_ipow(x, 2)*dx*lambda + 3.66627e-05 *lens_ipow(x, 3)*lambda + 3.82249e-05 *x*lens_ipow(y, 2)*lens_ipow(lambda, 2) + -0.000348114 *lens_ipow(x, 2)*lens_ipow(dx, 3) + -1.29379 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 4) + -0.149661 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 4)+0.0f;
const double dx30 =  + 0.0619428 *dx*dy + 2.5812e-06 *x*y + 0.0032672 *x*dy*lambda + -3.31897e-06 *x*y*lambda + -0.000282501 *y*dx*lens_ipow(dy, 2) + -0.00623205 *x*dy*lens_ipow(lambda, 2) + 0.00383424 *x*dy*lens_ipow(lambda, 3) + -0.000169835 *y*dx*lens_ipow(lambda, 5)+0.0f;
const double dx31 =  + -0.0260494  + -0.000724025 *lambda + 0.000576562 *lens_ipow(lambda, 2) + -0.00238355 *lens_ipow(dy, 2) + -0.000894871 *y*dy + -5.16276e-06 *lens_ipow(y, 2) + 1.2906e-06 *lens_ipow(x, 2) + 0.0184671 *lens_ipow(dx, 2)*lambda + -1.67488e-06 *lens_ipow(y, 2)*lambda + -1.65948e-06 *lens_ipow(x, 2)*lambda + -0.0171808 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 0.00570069 *lens_ipow(dx, 4) + -0.000282501 *x*dx*lens_ipow(dy, 2) + 0.0444021 *lens_ipow(dy, 4)*lambda + -0.000169835 *x*dx*lens_ipow(lambda, 5) + -0.325334 *lens_ipow(dy, 6)*lens_ipow(lambda, 4)+0.0f;
const double dx32 =  + 5.88933 *dx*dy + 0.0619428 *x*dy + 0.0369343 *y*dx*lambda + 4.91385 *dx*lens_ipow(dy, 3) + 4.85344 *lens_ipow(dx, 3)*dy + -0.0343615 *y*dx*lens_ipow(lambda, 2) + 0.0228028 *y*lens_ipow(dx, 3) + -0.000282501 *x*y*lens_ipow(dy, 2) + -0.000169835 *x*y*lens_ipow(lambda, 5)+0.0f;
const double dx33 =  + -1.63929  + 0.0706767 *lambda + -0.0467094 *lens_ipow(lambda, 2) + 2.54159 *lens_ipow(dy, 2) + 2.94466 *lens_ipow(dx, 2) + -0.0047671 *y*dy + -0.000447435 *lens_ipow(y, 2) + 0.0619428 *x*dx + 0.0016336 *lens_ipow(x, 2)*lambda + 9.29859 *lens_ipow(dy, 4) + 7.37078 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 1.21336 *lens_ipow(dx, 4) + -0.000565002 *x*y*dx*dy + -0.00311602 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + 0.177608 *y*lens_ipow(dy, 3)*lambda + 0.00191712 *lens_ipow(x, 2)*lens_ipow(lambda, 3) + -1.95201 *y*lens_ipow(dy, 5)*lens_ipow(lambda, 4)+0.0f;
const double dx34 =  + 0.0706767 *dy + -0.000724025 *y + -0.0934188 *dy*lambda + 0.00115312 *y*lambda + 0.0184671 *y*lens_ipow(dx, 2) + -5.58292e-07 *lens_ipow(y, 3) + 0.0016336 *lens_ipow(x, 2)*dy + -1.65948e-06 *lens_ipow(x, 2)*y + -0.0343615 *y*lens_ipow(dx, 2)*lambda + -0.00623205 *lens_ipow(x, 2)*dy*lambda + 0.0444021 *y*lens_ipow(dy, 4) + 0.00575136 *lens_ipow(x, 2)*dy*lens_ipow(lambda, 2) + -0.000849173 *x*y*dx*lens_ipow(lambda, 4) + -1.30134 *y*lens_ipow(dy, 6)*lens_ipow(lambda, 3)+0.0f;
const double dx40 =  + -0.000283222 *dx*lambda + -0.000486054 *y*dx*dy + -1.6105e-05 *lens_ipow(y, 2)*dx + -0.000237254 *x*lens_ipow(dy, 2) + -3.10473e-05 *x*y*dy + -7.66201e-07 *x*lens_ipow(y, 2) + -2.95629e-07 *lens_ipow(x, 3) + -3.77804e-07 *lens_ipow(x, 4)*dx + -3.76929e-09 *lens_ipow(x, 5) + -8.36048e-08 *lens_ipow(x, 5)*lens_ipow(dx, 2) + -4.80817e-10 *lens_ipow(x, 6)*dx + -2.74073e-09 *lens_ipow(x, 2)*lens_ipow(y, 4)*dx*lens_ipow(dy, 2) + -1.78965e-14 *lens_ipow(x, 3)*lens_ipow(y, 6) + -5.94486e-09 *lens_ipow(x, 6)*lens_ipow(dx, 3) + -7.2316e-15 *lens_ipow(x, 7)*lens_ipow(y, 2) + 0.000222363 *lens_ipow(x, 2)*y*lens_ipow(dx, 5)*dy*lambda+0.0f;
const double dx41 =  + 1.00772e-05 *y*lambda + 0.000202257 *dy*lens_ipow(lambda, 2) + -0.000730445 *y*lens_ipow(dy, 2) + -0.000266164 *y*lens_ipow(dx, 2) + -4.83626e-05 *lens_ipow(y, 2)*dy + -7.94011e-07 *lens_ipow(y, 3) + -0.000486054 *x*dx*dy + -3.22099e-05 *x*y*dx + -1.55236e-05 *lens_ipow(x, 2)*dy + -7.66201e-07 *lens_ipow(x, 2)*y + -3.65431e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*lens_ipow(dy, 2) + -2.68448e-14 *lens_ipow(x, 4)*lens_ipow(y, 5) + -1.8079e-15 *lens_ipow(x, 8)*y + 7.41209e-05 *lens_ipow(x, 3)*lens_ipow(dx, 5)*dy*lambda+0.0f;
const double dx42 =  + -0.000283222 *x*lambda + -0.000266164 *lens_ipow(y, 2)*dx + -0.000486054 *x*y*dy + -1.6105e-05 *x*lens_ipow(y, 2) + -0.920072 *lens_ipow(dx, 3)*lambda + -7.55608e-08 *lens_ipow(x, 5) + -2.78683e-08 *lens_ipow(x, 6)*dx + -6.86882e-11 *lens_ipow(x, 7) + -9.13577e-10 *lens_ipow(x, 3)*lens_ipow(y, 4)*lens_ipow(dy, 2) + -2.5478e-09 *lens_ipow(x, 7)*lens_ipow(dx, 2) + 0.000370604 *lens_ipow(x, 3)*y*lens_ipow(dx, 4)*dy*lambda+0.0f;
const double dx43 =  + 0.000202257 *y*lens_ipow(lambda, 2) + -0.000730445 *lens_ipow(y, 2)*dy + -1.61209e-05 *lens_ipow(y, 3) + -0.000486054 *x*y*dx + -0.000237254 *lens_ipow(x, 2)*dy + -1.55236e-05 *lens_ipow(x, 2)*y + -1.82715e-09 *lens_ipow(x, 3)*lens_ipow(y, 4)*dx*dy + 7.41209e-05 *lens_ipow(x, 3)*y*lens_ipow(dx, 5)*lambda+0.0f;
const double dx44 =  + 0.849922  + -3.55695 *lambda + 5.24736 *lens_ipow(lambda, 2) + 5.03858e-06 *lens_ipow(y, 2) + -0.000283222 *x*dx + -2.66563 *lens_ipow(lambda, 3) + 0.000404514 *y*dy*lambda + -0.230018 *lens_ipow(dx, 4) + 7.41209e-05 *lens_ipow(x, 3)*y*lens_ipow(dx, 5)*dy+0.0f;
} break;