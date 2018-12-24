case angenieux_double_gauss_1953_49mm:
{
out[0] =  + 49.1433 *dx + -0.513328 *x + 0.192173 *x*lambda + -20.335 *dx*lens_ipow(dy, 2) + -19.9106 *lens_ipow(dx, 3) + 0.253296 *x*lens_ipow(dy, 2) + 0.319553 *x*lens_ipow(dx, 2) + 0.0060597 *x*y*dy + -0.00117189 *x*lens_ipow(y, 2) + 0.0135173 *lens_ipow(x, 2)*dx + -0.000854669 *lens_ipow(x, 3) + 2.67923e-05 *lens_ipow(y, 4)*dx + -2.31028e-06 *lens_ipow(x, 3)*lens_ipow(y, 2) + -1.38382e-06 *lens_ipow(x, 5);
out[1] =  + 49.1383 *dy + -0.513863 *y + 0.19164 *y*lambda + -19.8535 *lens_ipow(dy, 3) + -20.3529 *lens_ipow(dx, 2)*dy + 0.32836 *y*lens_ipow(dy, 2) + 0.253447 *y*lens_ipow(dx, 2) + 0.013764 *lens_ipow(y, 2)*dy + -0.000846311 *lens_ipow(y, 3) + 0.0059326 *x*y*dx + -0.001166 *lens_ipow(x, 2)*y + -1.39688e-06 *lens_ipow(y, 5) + -2.4141e-06 *lens_ipow(x, 2)*lens_ipow(y, 3) + 2.6327e-05 *lens_ipow(x, 4)*dy;
out[2] =  + -0.609131 *dx + -0.0136628 *x + -0.00255248 *x*lambda + 0.167611 *dx*lens_ipow(dy, 2) + 0.272776 *lens_ipow(dx, 3) + -0.0024947 *x*lens_ipow(dy, 2) + -0.00010505 *x*y*dy + 9.13473e-06 *x*lens_ipow(y, 2) + 1.11558e-05 *lens_ipow(x, 3) + 2.50396e-08 *x*lens_ipow(y, 4) + 3.52662e-05 *lens_ipow(x, 2)*y*dx*dy + 5.14112e-08 *lens_ipow(x, 3)*lens_ipow(y, 2) + -5.82766e-07 *lens_ipow(x, 4)*dx + 1.89983e-08 *lens_ipow(x, 5);
out[3] =  + -0.612494 *dy + -0.0136392 *y + -0.00251221 *y*lambda + 0.279447 *lens_ipow(dy, 3) + 0.369593 *lens_ipow(dx, 2)*dy + -0.00451731 *y*lens_ipow(dx, 2) + 1.02324e-05 *lens_ipow(y, 3) + 0.00468285 *x*dx*dy + -0.000103711 *x*y*dx + 9.95221e-06 *lens_ipow(x, 2)*y + -5.66354e-07 *lens_ipow(y, 4)*dy + 2.09699e-08 *lens_ipow(y, 5) + 5.37936e-08 *lens_ipow(x, 2)*lens_ipow(y, 3) + 2.62875e-08 *lens_ipow(x, 4)*y;
out_transmittance =  + 0.327805  + 0.348986 *lambda + -0.236323 *lens_ipow(lambda, 2) + -0.00106248 *x*dx + -0.263343 *lens_ipow(dy, 4) + -0.225619 *lens_ipow(dx, 4) + -0.0106736 *y*lens_ipow(dy, 3) + -0.000301168 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -6.03226e-08 *lens_ipow(y, 4) + 7.34702e-06 *x*lens_ipow(y, 2)*dx + -0.000227849 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -8.28495e-08 *lens_ipow(x, 4) + -0.749681 *lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + 4.68196e-05 *lens_ipow(x, 2)*y*lens_ipow(dy, 3);
} break;
