case cooke__speed_panchro__1920__75mm:
{
const double dx00 =  + 0.645828  + 0.0791184 *lambda + -0.000310767 *y*dy + -0.0556604 *lens_ipow(lambda, 2) + 1.52245e-05 *lens_ipow(y, 2) + -0.289697 *lens_ipow(dy, 2) + -0.689895 *lens_ipow(dx, 2) + 8.65664e-05 *lens_ipow(x, 2)*lambda + 0.202471 *lens_ipow(dy, 4) + -2.17019 *lens_ipow(dx, 4)*lambda + -0.0737455 *x*dx*lens_ipow(dy, 4) + 0.00305349 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 6.9699e-05 *lens_ipow(x, 3)*dx*lens_ipow(lambda, 3)+0.0f;
const double dx01 =  + -0.000310767 *x*dy + 3.04491e-05 *x*y + 0.00211274 *y*dx + -2.13337 *dx*dy*lambda + 3.95429 *dx*dy*lens_ipow(lambda, 2) + -1.40871 *lens_ipow(dx, 3)*dy + 0.000276773 *lens_ipow(y, 2)*dx*dy + -0.655789 *dx*lens_ipow(dy, 3) + -0.0243646 *y*lens_ipow(dx, 3) + -2.4027 *dx*dy*lens_ipow(lambda, 3)+0.0f;
const double dx02 =  + 52.6321  + 6.31981 *lambda + -119.646 *lens_ipow(dx, 2) + -41.3013 *lens_ipow(dy, 2) + -1.37979 *x*dx + 0.00105637 *lens_ipow(y, 2) + -4.33794 *lens_ipow(lambda, 2) + -2.13337 *y*dy*lambda + 3.95429 *y*dy*lens_ipow(lambda, 2) + -4.22614 *y*lens_ipow(dx, 2)*dy + 9.22576e-05 *lens_ipow(y, 3)*dy + -0.655789 *y*lens_ipow(dy, 3) + -0.0365469 *lens_ipow(y, 2)*lens_ipow(dx, 2) + -2.4027 *y*dy*lens_ipow(lambda, 3) + -269.961 *lens_ipow(dx, 4)*lambda + -8.68075 *x*lens_ipow(dx, 3)*lambda + -0.0368727 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 0.00203566 *lens_ipow(x, 3)*dx*lens_ipow(lambda, 2) + -828.648 *lens_ipow(dx, 4)*lens_ipow(dy, 2) + 1.74247e-05 *lens_ipow(x, 4)*lens_ipow(lambda, 3)+0.0f;
const double dx03 =  + -0.000310767 *x*y + -82.6025 *dx*dy + -0.579393 *x*dy + -2.13337 *y*dx*lambda + 3.95429 *y*dx*lens_ipow(lambda, 2) + -1.40871 *y*lens_ipow(dx, 3) + 9.22576e-05 *lens_ipow(y, 3)*dx + 0.809883 *x*lens_ipow(dy, 3) + -1.96737 *y*dx*lens_ipow(dy, 2) + -2.4027 *y*dx*lens_ipow(lambda, 3) + -0.147491 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3) + -331.459 *lens_ipow(dx, 5)*dy+0.0f;
const double dx04 =  + 0.0791184 *x + 6.31981 *dx + -0.111321 *x*lambda + -8.67589 *dx*lambda + 2.88555e-05 *lens_ipow(x, 3) + -2.13337 *y*dx*dy + 7.90858 *y*dx*dy*lambda + -7.20809 *y*dx*dy*lens_ipow(lambda, 2) + -53.9922 *lens_ipow(dx, 5) + -2.17019 *x*lens_ipow(dx, 4) + 0.00203566 *lens_ipow(x, 3)*lens_ipow(dx, 2)*lambda + 5.22742e-05 *lens_ipow(x, 4)*dx*lens_ipow(lambda, 2)+0.0f;
const double dx10 =  + -0.431014 *dx*dy + 3.60009e-05 *x*y + 0.0014218 *x*dy + 0.0673625 *dx*dy*lambda + -0.775387 *lens_ipow(dx, 3)*dy*lambda + 0.132311 *y*lens_ipow(dx, 3)*lens_ipow(dy, 2) + -0.204778 *x*lens_ipow(dy, 5) + 2.69119e-08 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + 4.70507e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy*lambda + -22.0656 *dx*lens_ipow(dy, 5)*lambda+0.0f;
const double dx11 =  + 0.641888  + 0.0882786 *lambda + -0.277811 *lens_ipow(dx, 2) + -0.673662 *lens_ipow(dy, 2) + -0.0604279 *lens_ipow(lambda, 2) + 1.80004e-05 *lens_ipow(x, 2) + 4.99798e-05 *lens_ipow(y, 2) + 0.211083 *lens_ipow(dx, 4) + -2.49057 *lens_ipow(dy, 4)*lambda + 0.132311 *x*lens_ipow(dx, 3)*lens_ipow(dy, 2) + 0.00322346 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 4.42431e-05 *lens_ipow(y, 3)*dy*lens_ipow(lambda, 2) + 1.34559e-08 *lens_ipow(x, 4)*y*dy + 3.13671e-06 *lens_ipow(x, 3)*y*dx*dy*lambda + 407.123 *lens_ipow(dx, 6)*lens_ipow(dy, 4)+0.0f;
const double dx12 =  + -0.555621 *y*dx + -0.431014 *x*dy + -81.8007 *dx*dy + 0.0673625 *x*dy*lambda + 0.844332 *y*lens_ipow(dx, 3) + -2.32616 *x*lens_ipow(dx, 2)*dy*lambda + 0.396932 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 1.56836e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy*lambda + -22.0656 *x*lens_ipow(dy, 5)*lambda + -14178.3 *dx*lens_ipow(dy, 7)*lens_ipow(lambda, 2) + 2442.74 *y*lens_ipow(dx, 5)*lens_ipow(dy, 4)+0.0f;
const double dx13 =  + 52.7206  + 5.9613 *lambda + -1.34732 *y*dy + -0.431014 *x*dx + -40.9004 *lens_ipow(dx, 2) + -3.96818 *lens_ipow(lambda, 2) + 0.0007109 *lens_ipow(x, 2) + -119.12 *lens_ipow(dy, 2) + 0.0673625 *x*dx*lambda + -0.775387 *x*lens_ipow(dx, 3)*lambda + -9.9623 *y*lens_ipow(dy, 3)*lambda + -296.634 *lens_ipow(dy, 4)*lambda + 0.264621 *x*y*lens_ipow(dx, 3)*dy + 0.00214897 *lens_ipow(y, 3)*dy*lens_ipow(lambda, 2) + 1.10608e-05 *lens_ipow(y, 4)*lens_ipow(lambda, 2) + -0.511946 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 6.72797e-09 *lens_ipow(x, 4)*lens_ipow(y, 2) + 1.56836e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*lambda + -110.328 *x*dx*lens_ipow(dy, 4)*lambda + -49624 *lens_ipow(dx, 2)*lens_ipow(dy, 6)*lens_ipow(lambda, 2) + 1628.49 *y*lens_ipow(dx, 6)*lens_ipow(dy, 3)+0.0f;
const double dx14 =  + 5.9613 *dy + 0.0882786 *y + -0.120856 *y*lambda + -7.93636 *dy*lambda + 0.0673625 *x*dx*dy + -0.775387 *x*lens_ipow(dx, 3)*dy + -2.49057 *y*lens_ipow(dy, 4) + -59.3268 *lens_ipow(dy, 5) + 0.00214897 *lens_ipow(y, 3)*lens_ipow(dy, 2)*lambda + 2.21216e-05 *lens_ipow(y, 4)*dy*lambda + 1.56836e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*dy + -22.0656 *x*dx*lens_ipow(dy, 5) + -14178.3 *lens_ipow(dx, 2)*lens_ipow(dy, 7)*lambda+0.0f;
const double dx20 =  + -0.0127139  + 0.000865066 *lambda + -0.000971835 *x*dx + -3.12881e-06 *lens_ipow(y, 2) + -9.62204e-06 *lens_ipow(x, 2) + -0.0139184 *lens_ipow(dy, 2) + -0.0425989 *lens_ipow(dx, 2) + -0.00102323 *y*dy*lambda + 0.00123047 *y*lens_ipow(dx, 2)*dy + 0.20662 *lens_ipow(dx, 4) + 0.00351302 *x*lens_ipow(dx, 3) + 0.219974 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.0283343 *lens_ipow(dy, 4) + 0.000859779 *y*dy*lens_ipow(lambda, 2) + 0.00228124 *x*dx*lens_ipow(dy, 2) + -1.39462e-05 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda+0.0f;
const double dx21 =  + -0.0267834 *dx*dy + -6.25762e-06 *x*y + -0.000341269 *y*dx + -0.00102323 *x*dy*lambda + 0.00123047 *x*lens_ipow(dx, 2)*dy + 0.134539 *lens_ipow(dx, 3)*dy + 0.0668341 *dx*lens_ipow(dy, 3) + 0.00108801 *y*lens_ipow(dx, 3) + 0.000859779 *x*dy*lens_ipow(lambda, 2) + -2.78923e-05 *x*y*lens_ipow(dy, 2)*lambda+0.0f;
const double dx22 =  + 0.48125  + 0.0226346 *lambda + -0.0267834 *y*dy + -0.000485918 *lens_ipow(x, 2) + -2.98242 *lens_ipow(dx, 2) + -0.898759 *lens_ipow(dy, 2) + -0.0851977 *x*dx + -0.000170635 *lens_ipow(y, 2) + 0.00246094 *x*y*dx*dy + 0.826479 *x*lens_ipow(dx, 3) + 0.00526953 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.403616 *y*lens_ipow(dx, 2)*dy + 36.4749 *lens_ipow(dx, 4) + 0.439947 *x*dx*lens_ipow(dy, 2) + 4.85154 *lens_ipow(dy, 4) + 0.0668341 *y*lens_ipow(dy, 3) + 0.00163201 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 0.00114062 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 38.8552 *lens_ipow(dx, 2)*lens_ipow(dy, 2)+0.0f;
const double dx23 =  + -0.0267834 *y*dx + -1.79752 *dx*dy + -0.0278368 *x*dy + -0.00102323 *x*y*lambda + 0.00123047 *x*y*lens_ipow(dx, 2) + 0.134539 *y*lens_ipow(dx, 3) + 0.439947 *x*lens_ipow(dx, 2)*dy + 19.4062 *dx*lens_ipow(dy, 3) + 0.113337 *x*lens_ipow(dy, 3) + 0.200502 *y*dx*lens_ipow(dy, 2) + 0.000859779 *x*y*lens_ipow(lambda, 2) + 0.00228124 *lens_ipow(x, 2)*dx*dy + 25.9035 *lens_ipow(dx, 3)*dy + -2.78923e-05 *x*lens_ipow(y, 2)*dy*lambda+0.0f;
const double dx24 =  + 0.000865066 *x + 0.0226346 *dx + -0.00102323 *x*y*dy + 0.00171956 *x*y*dy*lambda + -1.39462e-05 *x*lens_ipow(y, 2)*lens_ipow(dy, 2)+0.0f;
const double dx30 =  + -0.0258608 *dx*dy + -0.000280416 *y*dx + -5.95092e-06 *x*y + -0.000322314 *x*dy + 0.0677584 *lens_ipow(dx, 3)*dy + 0.0716374 *dx*lens_ipow(dy, 3) + -1.58289e-05 *x*y*lens_ipow(dx, 2) + -2.17409e-05 *x*y*lens_ipow(dy, 2)+0.0f;
const double dx31 =  + -0.0135113  + 0.00375296 *lambda + -0.0134018 *lens_ipow(dx, 2) + -0.000961539 *y*dy + -0.0413937 *lens_ipow(dy, 2) + -0.000280416 *x*dx + -0.00258742 *lens_ipow(lambda, 2) + -2.97546e-06 *lens_ipow(x, 2) + -9.58359e-06 *lens_ipow(y, 2) + 0.0285487 *lens_ipow(dx, 4) + 0.00309123 *y*lens_ipow(dy, 3) + -7.91443e-06 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.00227568 *y*lens_ipow(dx, 2)*dy + 0.186416 *lens_ipow(dy, 4) + 0.177729 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -1.08704e-05 *lens_ipow(x, 2)*lens_ipow(dy, 2)+0.0f;
const double dx32 =  + -0.0268037 *y*dx + -0.0258608 *x*dy + -0.000280416 *x*y + -1.7348 *dx*dy + 0.203275 *x*lens_ipow(dx, 2)*dy + 21.4903 *dx*lens_ipow(dy, 3) + 0.114195 *y*lens_ipow(dx, 3) + 0.0716374 *x*lens_ipow(dy, 3) + -1.58289e-05 *lens_ipow(x, 2)*y*dx + 0.00227568 *lens_ipow(y, 2)*dx*dy + 0.355459 *y*dx*lens_ipow(dy, 2) + 19.4962 *lens_ipow(dx, 3)*dy+0.0f;
const double dx33 =  + 0.470227  + 0.0481744 *lambda + -0.00048077 *lens_ipow(y, 2) + -0.0827874 *y*dy + -0.0258608 *x*dx + -0.867401 *lens_ipow(dx, 2) + -0.000161157 *lens_ipow(x, 2) + -2.81207 *lens_ipow(dy, 2) + 0.0677584 *x*lens_ipow(dx, 3) + 32.2354 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 33.7803 *lens_ipow(dy, 4) + 0.214912 *x*dx*lens_ipow(dy, 2) + -0.0368474 *lens_ipow(lambda, 4) + 0.00463684 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.00113784 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 0.745663 *y*lens_ipow(dy, 3) + 0.355459 *y*lens_ipow(dx, 2)*dy + 4.87406 *lens_ipow(dx, 4) + -2.17409e-05 *lens_ipow(x, 2)*y*dy+0.0f;
const double dx34 =  + 0.0481744 *dy + 0.00375296 *y + -0.00517484 *y*lambda + -0.147389 *dy*lens_ipow(lambda, 3)+0.0f;
const double dx40 =  + 0.000800654 *dx + -0.136797 *lens_ipow(dx, 3) + -1.7021e-05 *x*y*dy + -8.58465e-06 *lens_ipow(y, 2)*dx + -6.26363e-08 *x*lens_ipow(y, 2) + -0.00314929 *x*lens_ipow(dx, 2) + -2.03339e-05 *lens_ipow(x, 2)*dx + -0.140664 *dx*lens_ipow(dy, 2) + -0.00221262 *y*dx*dy + -0.00117246 *x*lens_ipow(dy, 2)+0.0f;
const double dx41 =  + -0.0287324 *lens_ipow(dy, 3) + -0.00119023 *y*lens_ipow(dx, 2) + -8.51052e-06 *lens_ipow(x, 2)*dy + -1.71693e-05 *x*y*dx + -6.26363e-08 *lens_ipow(x, 2)*y + -0.141155 *lens_ipow(dx, 2)*dy + -0.00221262 *x*dx*dy + -2.31678e-05 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -0.0022159 *lens_ipow(y, 2)*lens_ipow(dy, 3) + -0.105415 *y*lens_ipow(dy, 4) + -2.06225 *lens_ipow(dy, 5) + -3.16993e-10 *lens_ipow(y, 6)*dy+0.0f;
const double dx42 =  + 0.000800654 *x + 0.121823 *dx + -16.8842 *lens_ipow(dx, 3) + -0.00119023 *lens_ipow(y, 2)*dx + -0.410391 *x*lens_ipow(dx, 2) + -17.0856 *dx*lens_ipow(dy, 2) + -8.58465e-06 *x*lens_ipow(y, 2) + -0.00314929 *lens_ipow(x, 2)*dx + -0.282309 *y*dx*dy + -6.77798e-06 *lens_ipow(x, 3) + -0.140664 *x*lens_ipow(dy, 2) + -0.00221262 *x*y*dy+0.0f;
const double dx43 =  + 0.0245098 *dy + -0.0861972 *y*lens_ipow(dy, 2) + -17.0856 *lens_ipow(dx, 2)*dy + -8.51052e-06 *lens_ipow(x, 2)*y + -5.96444 *lens_ipow(dy, 3) + -0.141155 *y*lens_ipow(dx, 2) + -0.281328 *x*dx*dy + -0.00221262 *x*y*dx + -0.00117246 *lens_ipow(x, 2)*dy + -1.15839e-05 *lens_ipow(y, 4)*dy + -0.0022159 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -206.468 *lens_ipow(dy, 5) + -0.21083 *lens_ipow(y, 2)*lens_ipow(dy, 3) + -10.3113 *y*lens_ipow(dy, 4) + -4.52846e-11 *lens_ipow(y, 7)+0.0f;
const double dx44 =  + 0.36623  + -1.01608 *lambda + 0.743444 *lens_ipow(lambda, 2)+0.0f;
} break;