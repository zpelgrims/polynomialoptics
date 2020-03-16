case kodak__petzval__1948__58mm:
{
const double dx00 =  + 0.792291  + 0.14045 *lens_ipow(dy, 2) + 0.585192 *lens_ipow(dx, 2) + 0.0142849 *y*dy + 0.000163413 *lens_ipow(y, 2) + 0.0401087 *x*dx + 0.00036009 *lens_ipow(x, 2) + 0.0954331 *x*lens_ipow(dx, 3) + 0.0105553 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.000343671 *lens_ipow(x, 3)*dx + 3.30784e-06 *lens_ipow(x, 4) + 3.89879 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + 4.29328e-09 *lens_ipow(y, 5)*dy + -0.143874 *x*lens_ipow(dx, 3)*lens_ipow(dy, 2) + -2.50352e-06 *x*lens_ipow(y, 3)*dx*dy + -4.76668e-06 *lens_ipow(x, 3)*y*dx*dy+0.0f;
const double dx01 =  + 0.556785 *dx*dy + 0.0192997 *y*dx + 0.0142849 *x*dy + 0.000326826 *x*y + 2.14664e-08 *x*lens_ipow(y, 4)*dy + -3.75528e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + -1.19167e-06 *lens_ipow(x, 4)*dx*dy+0.0f;
const double dx02 =  + 44.4314  + 0.761035 *lambda + -0.520161 *lens_ipow(lambda, 2) + 1.38736 *lens_ipow(dy, 2) + 0.556785 *y*dy + 0.00964987 *lens_ipow(y, 2) + 1.17038 *x*dx + 0.0200543 *lens_ipow(x, 2) + 0.14315 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.00703689 *lens_ipow(x, 3)*dx + 8.59177e-05 *lens_ipow(x, 4) + 7.79758 *x*dx*lens_ipow(dy, 4) + -0.215811 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -1.25176e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -1.19167e-06 *lens_ipow(x, 4)*y*dy+0.0f;
const double dx03 =  + 2.77472 *dx*dy + 0.556785 *y*dx + 0.2809 *x*dy + 0.0142849 *x*y + 15.5952 *x*lens_ipow(dx, 2)*lens_ipow(dy, 3) + 4.29328e-09 *x*lens_ipow(y, 5) + -0.143874 *lens_ipow(x, 2)*lens_ipow(dx, 3)*dy + -1.25176e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -1.19167e-06 *lens_ipow(x, 4)*y*dx+0.0f;
const double dx04 =  + 0.761035 *dx + -1.04032 *dx*lambda+0.0f;
const double dx10 =  + 0.558886 *dx*dy + 0.0146088 *y*dx + 0.0195587 *x*dy + 0.000337477 *x*y + 2.78449e-08 *x*lens_ipow(y, 4)*dy + -5.55778e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + 4.28592e-06 *lens_ipow(x, 3)*y*lens_ipow(dy, 2)*lambda + -9.21579e-10 *lens_ipow(x, 5)*y*lambda+0.0f;
const double dx11 =  + 0.792148  + 0.590742 *lens_ipow(dy, 2) + 0.143798 *lens_ipow(dx, 2) + 0.0406656 *y*dy + 0.000375294 *lens_ipow(y, 2) + 0.0146088 *x*dx + 0.000168739 *lens_ipow(x, 2) + 0.10036 *y*lens_ipow(dy, 3) + 0.0107358 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.000336983 *lens_ipow(y, 3)*dy + 3.11246e-06 *lens_ipow(y, 4) + 4.01293 *lens_ipow(dx, 4)*lens_ipow(dy, 2) + 5.56898e-08 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -3.70518e-06 *lens_ipow(x, 3)*y*dx*dy + 1.07148e-06 *lens_ipow(x, 4)*lens_ipow(dy, 2)*lambda + -1.53597e-10 *lens_ipow(x, 6)*lambda+0.0f;
const double dx12 =  + 2.45819 *dx*dy + 0.287596 *y*dx + 0.558886 *x*dy + 0.0146088 *x*y + 16.0517 *y*lens_ipow(dx, 3)*lens_ipow(dy, 2) + -1.85259e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy+0.0f;
const double dx13 =  + 44.4236  + 0.776576 *lambda + -0.526972 *lens_ipow(lambda, 2) + 1.22909 *lens_ipow(dx, 2) + 1.18148 *y*dy + 0.0203328 *lens_ipow(y, 2) + 0.558886 *x*dx + 0.00977933 *lens_ipow(x, 2) + 0.15054 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.00715722 *lens_ipow(y, 3)*dy + 8.42457e-05 *lens_ipow(y, 4) + 8.02585 *y*lens_ipow(dx, 4)*dy + 1.39225e-08 *lens_ipow(x, 2)*lens_ipow(y, 4) + -1.85259e-06 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx + 2.14296e-06 *lens_ipow(x, 4)*y*dy*lambda+0.0f;
const double dx14 =  + 0.776576 *dy + -1.05394 *dy*lambda + 1.07148e-06 *lens_ipow(x, 4)*y*lens_ipow(dy, 2) + -1.53597e-10 *lens_ipow(x, 6)*y+0.0f;
const double dx20 =  + -0.0120733  + 0.00635476 *lens_ipow(dy, 2) + 0.0186098 *lens_ipow(dx, 2) + 0.000776513 *y*dy + 9.42646e-06 *lens_ipow(y, 2) + 0.0019829 *x*dx + 2.316e-05 *lens_ipow(x, 2) + 1.14239e-07 *lens_ipow(y, 3)*dy + 0.000134629 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 7.60487e-06 *lens_ipow(x, 3)*dx + 9.61497e-08 *lens_ipow(x, 4) + 0.000374531 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -6.19437e-07 *x*lens_ipow(y, 3)*dx*dy + 1.86036e-10 *lens_ipow(x, 2)*lens_ipow(y, 4) + -6.42409e-06 *lens_ipow(x, 3)*dx*lens_ipow(dy, 2) + -2.60039e-07 *lens_ipow(x, 3)*y*dx*dy+0.0f;
const double dx21 =  + 0.0157796 *dx*dy + 0.000701982 *y*dx + 0.000776513 *x*dy + 1.88529e-05 *x*y + 3.42718e-07 *x*lens_ipow(y, 2)*dy + 0.000749061 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -9.29155e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + 2.48047e-10 *lens_ipow(x, 3)*lens_ipow(y, 3) + -6.50098e-08 *lens_ipow(x, 4)*dx*dy+0.0f;
const double dx22 =  + 0.581262  + -0.188563 *lens_ipow(dy, 2) + -0.563436 *lens_ipow(dx, 2) + 0.0157796 *y*dy + 0.000350991 *lens_ipow(y, 2) + 0.0372196 *x*dx + 0.000991448 *lens_ipow(x, 2) + -0.0828671 *lens_ipow(dx, 2)*lambda + 8.97524e-05 *lens_ipow(x, 3)*dx + 1.90122e-06 *lens_ipow(x, 4) + 0.000749061 *x*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + -3.09718e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + -1.60602e-06 *lens_ipow(x, 4)*lens_ipow(dy, 2) + -6.50098e-08 *lens_ipow(x, 4)*y*dy+0.0f;
const double dx23 =  + -0.377126 *dx*dy + 0.0157796 *y*dx + 0.0127095 *x*dy + 0.000776513 *x*y + 1.14239e-07 *x*lens_ipow(y, 3) + 0.000749061 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + -3.09718e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -3.21205e-06 *lens_ipow(x, 4)*dx*dy + -6.50098e-08 *lens_ipow(x, 4)*y*dx+0.0f;
const double dx24 =  + -0.0276224 *lens_ipow(dx, 3)+0.0f;
const double dx30 =  + 0.0158122 *dx*dy + 0.000776748 *y*dx + 0.000704879 *x*dy + 1.89176e-05 *x*y + 3.47339e-07 *lens_ipow(x, 2)*y*dx + -6.4902e-08 *lens_ipow(y, 4)*dx*dy + 0.000730177 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -9.0145e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + 2.39749e-10 *lens_ipow(x, 3)*lens_ipow(y, 3)+0.0f;
const double dx31 =  + -0.0120757  + 0.0187917 *lens_ipow(dy, 2) + 0.00633935 *lens_ipow(dx, 2) + 0.00199288 *y*dy + 2.33346e-05 *lens_ipow(y, 2) + 0.000776748 *x*dx + 9.45879e-06 *lens_ipow(x, 2) + 0.000133815 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 7.56038e-06 *lens_ipow(y, 3)*dy + 9.54866e-08 *lens_ipow(y, 4) + 1.1578e-07 *lens_ipow(x, 3)*dx + -6.26532e-06 *lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -2.59608e-07 *x*lens_ipow(y, 3)*dx*dy + 0.000365088 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -6.00967e-07 *lens_ipow(x, 3)*y*dx*dy + 1.79811e-10 *lens_ipow(x, 4)*lens_ipow(y, 2)+0.0f;
const double dx32 =  + -0.377998 *dx*dy + 0.0126787 *y*dx + 0.0158122 *x*dy + 0.000776748 *x*y + 1.1578e-07 *lens_ipow(x, 3)*y + -3.13266e-06 *lens_ipow(y, 4)*dx*dy + -6.4902e-08 *x*lens_ipow(y, 4)*dy + 0.000730177 *lens_ipow(x, 2)*y*dx*lens_ipow(dy, 2) + -3.00483e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy+0.0f;
const double dx33 =  + 0.581179  + -0.554497 *lens_ipow(dy, 2) + -0.188999 *lens_ipow(dx, 2) + 0.0375834 *y*dy + 0.000996438 *lens_ipow(y, 2) + 0.0158122 *x*dx + 0.00035244 *lens_ipow(x, 2) + -0.0860047 *lens_ipow(dy, 2)*lambda + 8.92101e-05 *lens_ipow(y, 3)*dy + 1.8901e-06 *lens_ipow(y, 4) + -1.56633e-06 *lens_ipow(y, 4)*lens_ipow(dx, 2) + -6.4902e-08 *x*lens_ipow(y, 4)*dx + 0.000730177 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*dy + -3.00483e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx+0.0f;
const double dx34 =  + -0.0286682 *lens_ipow(dy, 3)+0.0f;
const double dx40 =  + -5.94207e-05 *lens_ipow(y, 2)*dx + -4.32643e-06 *x*lens_ipow(y, 2) + -0.000114948 *lens_ipow(x, 2)*dx + -3.08506e-06 *lens_ipow(x, 3) + -0.000227995 *x*y*dy*lambda + 0.172392 *lens_ipow(dx, 5) + -0.00321885 *y*dx*dy*lens_ipow(lambda, 2) + -0.000168765 *lens_ipow(y, 2)*lens_ipow(dx, 3) + -0.00312398 *x*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -0.000335716 *x*y*lens_ipow(dy, 3) + -0.000586329 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 7.74744e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx*dy + -2.92523e-10 *lens_ipow(x, 3)*lens_ipow(y, 4) + -3.54214e-09 *lens_ipow(x, 6)*dx + -8.15368e-11 *lens_ipow(x, 7)+0.0f;
const double dx41 =  + -0.00104111 *y*lens_ipow(dx, 2) + -0.000118841 *x*y*dx + -4.32643e-06 *lens_ipow(x, 2)*y + -0.000113998 *lens_ipow(x, 2)*dy*lambda + -5.99097e-05 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -3.67371e-06 *lens_ipow(y, 4)*dy + -5.5699e-08 *lens_ipow(y, 5) + -0.00321885 *x*dx*dy*lens_ipow(lambda, 2) + -0.00033753 *x*y*lens_ipow(dx, 3) + -0.000167858 *lens_ipow(x, 2)*lens_ipow(dy, 3) + -0.000586329 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 7.74744e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*dy + -2.92523e-10 *lens_ipow(x, 4)*lens_ipow(y, 3)+0.0f;
const double dx42 =  + -0.00104111 *lens_ipow(y, 2)*dx + -5.94207e-05 *x*lens_ipow(y, 2) + -3.8316e-05 *lens_ipow(x, 3) + 0.86196 *x*lens_ipow(dx, 4) + -0.00321885 *x*y*dy*lens_ipow(lambda, 2) + -0.000506294 *x*lens_ipow(y, 2)*lens_ipow(dx, 2) + -0.000586329 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + 2.58248e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*dy + -5.0602e-10 *lens_ipow(x, 7)+0.0f;
const double dx43 =  + -0.000113998 *lens_ipow(x, 2)*y*lambda + -2.99548e-05 *lens_ipow(y, 4)*dy + -7.34742e-07 *lens_ipow(y, 5) + -0.00321885 *x*y*dx*lens_ipow(lambda, 2) + -0.00312398 *lens_ipow(x, 2)*dy*lens_ipow(lambda, 2) + -0.000503574 *lens_ipow(x, 2)*y*lens_ipow(dy, 2) + -0.000586329 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 2.58248e-07 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx+0.0f;
const double dx44 =  + 0.20392  + -0.277563 *lambda + -0.000113998 *lens_ipow(x, 2)*y*dy + -0.00643771 *x*y*dx*dy*lambda + -0.00312398 *lens_ipow(x, 2)*lens_ipow(dy, 2)*lambda+0.0f;
} break;