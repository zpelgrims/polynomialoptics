case minolta__fisheye__1978__22mm:
{
out[0] =  + 51.0305 *dx + 0.733929 *x + -1.48794 *dx*lambda + -0.0326085 *x*lambda + 87.127 *lens_ipow(dx, 3) + 4.36432 *x*lens_ipow(dx, 2) + 0.000116309 *x*lens_ipow(y, 2) + 0.0649506 *lens_ipow(x, 2)*dx + 0.000279019 *lens_ipow(x, 3) + 243.947 *dx*lens_ipow(dy, 2)*lambda + 9.57984 *y*dx*dy*lambda + 0.100881 *lens_ipow(y, 2)*dx*lambda + 3.00329 *x*lens_ipow(dy, 2)*lambda + 0.106223 *x*y*dy*lambda + 0.000408303 *x*lens_ipow(y, 2)*lambda + -0.0912152 *lens_ipow(y, 2)*dx*lens_ipow(lambda, 2) + -262.888 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + -13.3903 *y*dx*dy*lens_ipow(lambda, 3) + -3.23379 *x*lens_ipow(dy, 2)*lens_ipow(lambda, 3) + -0.11432 *x*y*dy*lens_ipow(lambda, 3) + 4.03962 *y*dx*dy*lens_ipow(lambda, 4) + -0.000573832 *x*lens_ipow(y, 2)*lens_ipow(lambda, 4);
out[1] =  + 51.028 *dy + 0.733959 *y + -1.48445 *dy*lambda + -0.0327609 *y*lambda + 87.2516 *lens_ipow(dy, 3) + 4.37067 *y*lens_ipow(dy, 2) + 0.0650749 *lens_ipow(y, 2)*dy + 0.000279958 *lens_ipow(y, 3) + 0.0136364 *lens_ipow(x, 2)*dy + 0.000250551 *lens_ipow(x, 2)*y + 326.528 *lens_ipow(dx, 2)*dy*lambda + 4.01016 *y*lens_ipow(dx, 2)*lambda + 12.349 *x*dx*dy*lambda + 0.142015 *x*y*dx*lambda + 0.0382774 *lens_ipow(x, 2)*dy*lambda + -298.312 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + -3.65448 *y*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -11.2652 *x*dx*dy*lens_ipow(lambda, 2) + -0.129422 *x*y*dx*lens_ipow(lambda, 2) + 0.000179597 *lens_ipow(x, 2)*y*lens_ipow(lambda, 2) + -0.0419115 *lens_ipow(x, 2)*dy*lens_ipow(lambda, 3) + -0.000404068 *lens_ipow(x, 2)*y*lens_ipow(lambda, 5);
out[2] =  + -0.573366 *dx + -0.0277402 *x + -0.124679 *dx*lambda + -0.0024019 *x*lambda + -0.923432 *dx*lens_ipow(dy, 2) + -1.03384 *lens_ipow(dx, 3) + 0.0341049 *y*dx*dy + 0.000426648 *lens_ipow(y, 2)*dx + 0.0269963 *x*lens_ipow(dy, 2) + 0.0598293 *x*lens_ipow(dx, 2) + 0.00151506 *x*y*dy + 9.9866e-06 *x*lens_ipow(y, 2) + 0.00195653 *lens_ipow(x, 2)*dx + 1.00318e-05 *lens_ipow(x, 3) + -8.10037 *lens_ipow(dx, 3)*lens_ipow(dy, 2) + -0.149428 *y*lens_ipow(dx, 3)*dy + -0.0018353 *lens_ipow(y, 2)*lens_ipow(dx, 3) + -0.285124 *x*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.00525264 *lens_ipow(x, 2)*dx*lens_ipow(dy, 2) + -2.03559e-05 *lens_ipow(x, 3)*lens_ipow(dy, 2) + -4.65976e-09 *lens_ipow(x, 3)*lens_ipow(y, 2) + 0.0126913 *x*lens_ipow(dy, 4)*lambda;
out[3] =  + -0.464996 *dy + -0.0257295 *y + -0.510045 *dy*lambda + -0.00968482 *y*lambda + 0.346828 *dy*lens_ipow(lambda, 2) + -1.1762 *lens_ipow(dy, 3) + -1.18866 *lens_ipow(dx, 2)*dy + 0.00659297 *y*lens_ipow(lambda, 2) + 0.0540254 *y*lens_ipow(dy, 2) + 0.0246594 *y*lens_ipow(dx, 2) + 0.00187123 *lens_ipow(y, 2)*dy + 9.61803e-06 *lens_ipow(y, 3) + 0.0318267 *x*dx*dy + 0.00152576 *x*y*dx + 0.000400007 *lens_ipow(x, 2)*dy + 9.87151e-06 *lens_ipow(x, 2)*y + -0.00111442 *lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + -0.102437 *x*dx*lens_ipow(dy, 3) + -0.00147252 *lens_ipow(x, 2)*lens_ipow(dy, 3) + -4.56616e-09 *lens_ipow(x, 2)*lens_ipow(y, 3) + -0.0425594 *x*lens_ipow(dx, 3)*dy*lambda + -0.000882806 *x*y*lens_ipow(dx, 3)*lambda;
out_transmittance =  + 0.662346  + 0.556675 *lambda + -0.766436 *lens_ipow(lambda, 2) + -0.17201 *lens_ipow(dy, 2) + -0.0823447 *lens_ipow(dx, 2) + -0.00466919 *y*dy + -3.15546e-05 *lens_ipow(y, 2) + -0.00221358 *x*dx + -1.36381e-05 *lens_ipow(x, 2) + 0.370864 *lens_ipow(lambda, 3) + -0.749774 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -4.34716 *lens_ipow(dx, 4) + -0.216117 *x*lens_ipow(dx, 3) + 0.000371191 *x*y*dx*dy + -0.00406996 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -5.26014e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + -3.49823e-05 *lens_ipow(x, 3)*dx + -1.20681e-07 *lens_ipow(x, 4) + -37.9883 *lens_ipow(dy, 6) + -1.98696 *y*lens_ipow(dy, 5) + -0.0342282 *lens_ipow(y, 2)*lens_ipow(dy, 4) + -0.00019146 *lens_ipow(y, 3)*lens_ipow(dy, 3);
} break;
