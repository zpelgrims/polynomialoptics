case schneider_anamorphic_2001_31mm:
{
out[0] =  + 38.2347 *dx + 0.608387 *x + 0.0455654 *x*lambda + 1.91347 *dx*lambda + -0.632497 *y*dx*dy + -0.0180557 *x*y*dy + -0.0165069 *lens_ipow(x, 2)*dx + -22.2374 *lens_ipow(dx, 3) + -26.0661 *dx*lens_ipow(dy, 2) + -0.000297703 *x*lens_ipow(y, 2) + -0.402827 *x*lens_ipow(dy, 2) + -0.583709 *x*lens_ipow(dx, 2) + -0.00767851 *lens_ipow(y, 2)*dx + -1.93805e-06 *lens_ipow(x, 5) + -0.00154447 *x*lens_ipow(y, 2)*lens_ipow(dx, 2) + -6.70053e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx + -0.00456894 *lens_ipow(x, 3)*lens_ipow(dx, 2) + -7.48134e-07 *lens_ipow(x, 6)*dx + -0.000522748 *lens_ipow(x, 4)*lens_ipow(dx, 3) + -1.52652e-08 *lens_ipow(x, 3)*lens_ipow(y, 4) + 0.00135115 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*lens_ipow(dy, 2)*lambda + -3.16492e-09 *lens_ipow(x, 4)*lens_ipow(y, 4)*dx + -8.08346e-08 *lens_ipow(x, 7)*lens_ipow(dx, 2) + -1.58349e-11 *lens_ipow(x, 7)*lens_ipow(y, 2) + -3.68029e-09 *lens_ipow(x, 3)*lens_ipow(y, 5)*dy + -1.73945e-07 *lens_ipow(x, 6)*y*dx*dy*lambda + -2.81396e-09 *lens_ipow(x, 7)*y*dy*lambda + -5.51406e-15 *lens_ipow(x, 11);
out[1] =  + 0.600935 *y + 37.8097 *dy + 1.90326 *dy*lambda + 0.044445 *y*lambda + -14.445 *lens_ipow(dx, 2)*dy + -14.2223 *lens_ipow(dy, 3) + -0.0896367 *y*lens_ipow(dx, 2)*lambda + -0.000209244 *lens_ipow(y, 4)*dy + -2.70094e-05 *lens_ipow(x, 4)*dy + -1.94845e-06 *lens_ipow(x, 4)*y + -1.64502e-06 *lens_ipow(y, 5) + -0.00184781 *lens_ipow(x, 3)*dx*dy + -0.0097277 *lens_ipow(y, 3)*lens_ipow(dy, 2) + 0.0278868 *lens_ipow(y, 3)*lens_ipow(dy, 4) + -1.39182e-05 *lens_ipow(y, 5)*lens_ipow(dx, 2) + -6.81606e-07 *x*lens_ipow(y, 5)*dx + -5.26405e-07 *lens_ipow(x, 4)*lens_ipow(y, 2)*dy + -1.2304e-08 *lens_ipow(x, 4)*lens_ipow(y, 3)*lambda + -1.39145e-06 *lens_ipow(x, 5)*y*dx*lambda + -1.00513e-10 *lens_ipow(x, 2)*lens_ipow(y, 7) + -3.25049e-06 *lens_ipow(y, 6)*lens_ipow(dx, 2)*dy + 1.38572e-05 *lens_ipow(x, 2)*lens_ipow(y, 4)*lens_ipow(dx, 2)*dy*lambda + 5.48732e-11 *lens_ipow(x, 2)*lens_ipow(y, 7)*lambda + 9.74859e-06 *lens_ipow(x, 5)*y*dx*lens_ipow(dy, 2)*lambda + -1.8263e-11 *lens_ipow(x, 2)*lens_ipow(y, 8)*dy + -1.01573e-11 *lens_ipow(x, 3)*lens_ipow(y, 7)*dx + -2.43852e-07 *lens_ipow(x, 6)*y*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 4.84324e-08 *x*lens_ipow(y, 7)*dx*lens_ipow(dy, 2);
out[2] =  + 0.217845 *dx + -0.023376 *x + 0.00256457 *x*lambda + -9.33661e-06 *lens_ipow(x, 3) + 0.0523111 *dx*lens_ipow(lambda, 2) + -0.000379342 *x*y*dy*lambda + 0.0126976 *x*y*lens_ipow(dx, 2)*dy + -1.60802 *lens_ipow(dx, 3)*lens_ipow(lambda, 2) + -1.2061e-07 *x*lens_ipow(y, 4) + -0.00158011 *lens_ipow(x, 2)*dx*lens_ipow(lambda, 2) + -0.132402 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + -0.0146078 *lens_ipow(x, 2)*dx*lens_ipow(dy, 2)*lambda + -0.000313629 *lens_ipow(x, 3)*lens_ipow(dy, 2)*lambda + -8.84684e-09 *lens_ipow(y, 6)*dx + -2.24481e-08 *x*lens_ipow(y, 5)*dy + -4.00284e-08 *lens_ipow(x, 5)*y*dy + -8.84804e-10 *lens_ipow(x, 5)*lens_ipow(y, 2) + -1.65539e-08 *lens_ipow(x, 2)*lens_ipow(y, 4)*dx + 1.12291 *y*lens_ipow(dx, 5)*dy + -3.07737e-10 *lens_ipow(x, 7) + -1.0736e-07 *lens_ipow(x, 6)*dx*lambda + -2.42159e-09 *lens_ipow(y, 7)*dx*dy + -1.56822e-10 *lens_ipow(x, 6)*lens_ipow(y, 2)*dx + -1.25905e-05 *lens_ipow(x, 5)*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -0.00746335 *lens_ipow(x, 3)*lens_ipow(dx, 4)*lens_ipow(lambda, 3) + -0.000632018 *lens_ipow(x, 4)*lens_ipow(dx, 3)*lens_ipow(lambda, 3) + -2.26546e-10 *lens_ipow(x, 7)*lens_ipow(lambda, 3) + -2.17293e-11 *lens_ipow(x, 8)*y*dx*dy;
out[3] =  + -0.0227155 *y + 0.234184 *dy + 0.00169747 *y*lambda + -0.0197045 *y*lens_ipow(dy, 2) + -9.58064e-06 *lens_ipow(y, 3) + -0.49814 *lens_ipow(dy, 3) + -1.14394e-05 *lens_ipow(y, 4)*dy + -1.215e-05 *x*lens_ipow(y, 3)*dx + -0.0198671 *lens_ipow(y, 2)*lens_ipow(dy, 3) + -0.0125064 *lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + -2.26947e-07 *lens_ipow(x, 2)*lens_ipow(y, 3) + -0.201647 *y*lens_ipow(dy, 4) + -0.000229262 *lens_ipow(y, 3)*lens_ipow(dx, 2) + -8.91664e-08 *lens_ipow(x, 4)*y + -0.000678363 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -2.79572e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*dy*lambda + -0.0013179 *x*lens_ipow(y, 2)*dx*dy*lambda + -3.65664e-10 *lens_ipow(y, 7) + -0.00839617 *lens_ipow(x, 2)*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + -0.00110847 *lens_ipow(x, 2)*y*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -1.25627e-06 *lens_ipow(x, 4)*y*lens_ipow(dx, 2)*lambda + -7.77965e-08 *lens_ipow(x, 5)*y*dx*lambda + -1.86465e-07 *lens_ipow(x, 6)*lens_ipow(dy, 3) + -0.0608653 *x*y*dx*lens_ipow(dy, 2)*lens_ipow(lambda, 4) + -1.56977e-10 *lens_ipow(y, 8)*dy*lambda + -2.22795e-05 *lens_ipow(x, 5)*dx*lens_ipow(dy, 3)*lambda + 2.07232e-10 *lens_ipow(x, 7)*y*dx*lens_ipow(lambda, 2) + -1.16035e-08 *lens_ipow(y, 7)*lens_ipow(dy, 2)*lens_ipow(lambda, 2);
out_transmittance =  + 0.52608  + 0.310193 *lambda + 0.00311549 *y*dy + -0.0812686 *lens_ipow(dx, 2) + -0.212366 *lens_ipow(lambda, 2) + -0.219356 *y*lens_ipow(dy, 3) + -0.00460448 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -5.68542 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.000280718 *lens_ipow(x, 2)*y*dy + -2.15754 *lens_ipow(dy, 4) + -0.000289712 *x*lens_ipow(y, 2)*dx + -4.58229e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + -0.290599 *y*lens_ipow(dx, 2)*dy + -0.00871974 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -0.308464 *x*dx*lens_ipow(dy, 2) + -0.0176889 *x*y*dx*dy + -0.00453903 *lens_ipow(x, 2)*lens_ipow(dy, 2) + -0.000170743 *lens_ipow(y, 3)*dy + -8.88474e-09 *lens_ipow(x, 6) + -1.0772e-06 *lens_ipow(x, 5)*dx + -9.28912e-09 *lens_ipow(y, 6) + -1.93345e-09 *lens_ipow(x, 7)*dx + -3.75485e-07 *lens_ipow(x, 6)*lens_ipow(dx, 2) + -2.19406e-07 *lens_ipow(y, 6)*lens_ipow(dy, 2) + -5.13004e-09 *lens_ipow(y, 7)*dy + 7.80474e-07 *lens_ipow(y, 6)*lens_ipow(dy, 4) + 4.57823e-12 *lens_ipow(y, 9)*dy + -3.18364e-08 *lens_ipow(x, 7)*lens_ipow(dx, 3);
} break;
