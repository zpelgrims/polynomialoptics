case unknown__petzval__1900__100mm:
{
double pred_x;
double pred_y;
double pred_dx;
double pred_dy;
double sqr_err = FLT_MAX;
for(int k=0;k<5&&sqr_err > 1e-4f;k++)
{
  const double begin_x = x + dist * dx;
  const double begin_y = y + dist * dy;
  const double begin_dx = dx;
  const double begin_dy = dy;
  const double begin_lambda = lambda;
  pred_x =  + 73.7384 *begin_dx + 0.728176 *begin_x + 19.2294 *begin_dx*begin_lambda + 0.301287 *begin_x*begin_lambda + -26.6564 *begin_dx*lens_ipow(begin_lambda, 2) + 0.513367 *begin_y*begin_dx*begin_dy + 0.00575368 *lens_ipow(begin_y, 2)*begin_dx + -0.419986 *begin_x*lens_ipow(begin_lambda, 2) + 0.114331 *begin_x*lens_ipow(begin_dy, 2) + 0.607287 *begin_x*lens_ipow(begin_dx, 2) + 0.00852689 *begin_x*begin_y*begin_dy + 6.55281e-05 *begin_x*lens_ipow(begin_y, 2) + 0.0135836 *lens_ipow(begin_x, 2)*begin_dx + 5.93305e-05 *lens_ipow(begin_x, 3) + 12.9936 *begin_dx*lens_ipow(begin_lambda, 3) + 0.205197 *begin_x*lens_ipow(begin_lambda, 3) + 4.81507e-06 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + 4.99191e-06 *lens_ipow(begin_x, 3)*begin_lambda + 0.161841 *begin_y*lens_ipow(begin_dx, 3)*begin_dy + 1.01751e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + 0.000298892 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + 7.02416e-06 *lens_ipow(begin_x, 4)*begin_dx + 4.08147e-08 *lens_ipow(begin_x, 5) + -0.194778 *begin_x*lens_ipow(begin_dx, 4)*begin_lambda + 4.76247e-07 *begin_x*lens_ipow(begin_y, 3)*begin_dy*begin_lambda + 9.52937e-08 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -2.9666e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + 2.40067e-15 *lens_ipow(begin_x, 7)*lens_ipow(begin_y, 4);
  pred_y =  + 73.7379 *begin_dy + 0.727939 *begin_y + 19.2421 *begin_dy*begin_lambda + 0.301908 *begin_y*begin_lambda + -26.661 *begin_dy*lens_ipow(begin_lambda, 2) + -0.420129 *begin_y*lens_ipow(begin_lambda, 2) + 0.600997 *begin_y*lens_ipow(begin_dy, 2) + 0.112726 *begin_y*lens_ipow(begin_dx, 2) + 0.0133571 *lens_ipow(begin_y, 2)*begin_dy + 5.97218e-05 *lens_ipow(begin_y, 3) + 0.513253 *begin_x*begin_dx*begin_dy + 0.00845785 *begin_x*begin_y*begin_dx + 0.00572558 *lens_ipow(begin_x, 2)*begin_dy + 6.63926e-05 *lens_ipow(begin_x, 2)*begin_y + 12.9868 *begin_dy*lens_ipow(begin_lambda, 3) + 0.205436 *begin_y*lens_ipow(begin_lambda, 3) + -23.8508 *lens_ipow(begin_dy, 5) + -0.925979 *begin_y*lens_ipow(begin_dy, 4) + 0.000611558 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + 1.15445e-05 *lens_ipow(begin_y, 4)*begin_dy + 6.21799e-08 *lens_ipow(begin_y, 5) + -2.327e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + 9.28307e-07 *begin_x*lens_ipow(begin_y, 3)*begin_dx*begin_lambda + 6.14422e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + 2.30575e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 2) + 258.305 *begin_y*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4) + -1.15835e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 3.95343e-16 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 7);
  pred_dx =  + 0.478247 *begin_dx + -0.00883993 *begin_x + 0.575316 *begin_dx*begin_lambda + 0.00992425 *begin_x*begin_lambda + -0.796414 *begin_dx*lens_ipow(begin_lambda, 2) + -0.346493 *begin_dx*lens_ipow(begin_dy, 2) + -0.357718 *lens_ipow(begin_dx, 3) + 0.00467274 *begin_y*begin_dx*begin_dy + 9.15902e-05 *lens_ipow(begin_y, 2)*begin_dx + -0.0138037 *begin_x*lens_ipow(begin_lambda, 2) + 0.00138665 *begin_x*lens_ipow(begin_dy, 2) + 0.00524655 *begin_x*lens_ipow(begin_dx, 2) + 0.000211074 *begin_x*begin_y*begin_dy + 1.63677e-06 *begin_x*lens_ipow(begin_y, 2) + 0.000283129 *lens_ipow(begin_x, 2)*begin_dx + 1.47232e-06 *lens_ipow(begin_x, 3) + 0.387476 *begin_dx*lens_ipow(begin_lambda, 3) + 0.00673151 *begin_x*lens_ipow(begin_lambda, 3) + 1.10985e-07 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + 1.35763e-07 *lens_ipow(begin_x, 3)*begin_lambda + 6.60233e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2) + 1.65417e-07 *lens_ipow(begin_x, 4)*begin_dx + 1.04074e-09 *lens_ipow(begin_x, 5) + 0.233525 *lens_ipow(begin_dx, 5)*lens_ipow(begin_lambda, 2) + 4.80151 *begin_x*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4) + -8.45682e-11 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3)*begin_dx*begin_dy + 3.77648e-17 *lens_ipow(begin_x, 7)*lens_ipow(begin_y, 4) + 7.27216e-16 *lens_ipow(begin_x, 8)*lens_ipow(begin_y, 2)*begin_dx;
  pred_dy =  + 0.477609 *begin_dy + -0.00885353 *begin_y + 0.578506 *begin_dy*begin_lambda + 0.0099762 *begin_y*begin_lambda + -0.802025 *begin_dy*lens_ipow(begin_lambda, 2) + -0.353378 *lens_ipow(begin_dy, 3) + -0.346451 *lens_ipow(begin_dx, 2)*begin_dy + -0.0138764 *begin_y*lens_ipow(begin_lambda, 2) + 0.00530618 *begin_y*lens_ipow(begin_dy, 2) + 0.00138426 *begin_y*lens_ipow(begin_dx, 2) + 0.000281455 *lens_ipow(begin_y, 2)*begin_dy + 1.49686e-06 *lens_ipow(begin_y, 3) + 0.00462518 *begin_x*begin_dx*begin_dy + 0.000209422 *begin_x*begin_y*begin_dx + 9.03191e-05 *lens_ipow(begin_x, 2)*begin_dy + 1.67164e-06 *lens_ipow(begin_x, 2)*begin_y + 0.391117 *begin_dy*lens_ipow(begin_lambda, 3) + 0.00677599 *begin_y*lens_ipow(begin_lambda, 3) + 6.50349e-08 *lens_ipow(begin_y, 3)*begin_lambda + 5.86333e-06 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + 1.62101e-07 *lens_ipow(begin_y, 4)*begin_dy + 1.0541e-09 *lens_ipow(begin_y, 5) + 1.52489e-08 *begin_x*lens_ipow(begin_y, 3)*begin_dx + 2.30823e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + 6.17952e-10 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_lambda + 7.68939 *begin_y*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4) + -3.69569e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + 1.40251e-17 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 7);
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 73.7384  + 19.2294 *begin_lambda + -26.6564 *lens_ipow(begin_lambda, 2) + 0.513367 *begin_y*begin_dy + 0.00575368 *lens_ipow(begin_y, 2) + 1.21457 *begin_x*begin_dx + 0.0135836 *lens_ipow(begin_x, 2) + 12.9936 *lens_ipow(begin_lambda, 3) + 0.485524 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + 1.01751e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + 0.000597785 *lens_ipow(begin_x, 3)*begin_dx + 7.02416e-06 *lens_ipow(begin_x, 4) + -0.779111 *begin_x*lens_ipow(begin_dx, 3)*begin_lambda + 1.90587e-07 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -2.9666e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dy+0.0f;
  dx1_domega0(0, 1) =  + 0.513367 *begin_y*begin_dx + 0.228662 *begin_x*begin_dy + 0.00852689 *begin_x*begin_y + 0.161841 *begin_y*lens_ipow(begin_dx, 3) + 4.76247e-07 *begin_x*lens_ipow(begin_y, 3)*begin_lambda + 1.90587e-07 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy + -2.9666e-11 *lens_ipow(begin_x, 6)*lens_ipow(begin_y, 3)*begin_dx+0.0f;
  dx1_domega0(1, 0) =  + 0.225452 *begin_y*begin_dx + 0.513253 *begin_x*begin_dy + 0.00845785 *begin_x*begin_y + 9.28307e-07 *begin_x*lens_ipow(begin_y, 3)*begin_lambda + 1033.22 *begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 4) + -2.31669e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*begin_dx*lens_ipow(begin_dy, 2)+0.0f;
  dx1_domega0(1, 1) =  + 73.7379  + 19.2421 *begin_lambda + -26.661 *lens_ipow(begin_lambda, 2) + 1.20199 *begin_y*begin_dy + 0.0133571 *lens_ipow(begin_y, 2) + 0.513253 *begin_x*begin_dx + 0.00572558 *lens_ipow(begin_x, 2) + 12.9868 *lens_ipow(begin_lambda, 3) + -119.254 *lens_ipow(begin_dy, 4) + -3.70391 *begin_y*lens_ipow(begin_dy, 3) + 0.00122312 *lens_ipow(begin_y, 3)*begin_dy + 1.15445e-05 *lens_ipow(begin_y, 4) + 2.30575e-06 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + 1033.22 *begin_y*lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 3) + -2.31669e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*begin_dy+0.0f;
  Eigen::Matrix2d invJ;
  const double invdet = 1.0f/(dx1_domega0(0, 0)*dx1_domega0(1, 1) - dx1_domega0(0, 1)*dx1_domega0(1, 0));
  invJ(0, 0) =  dx1_domega0(1, 1)*invdet;
  invJ(1, 1) =  dx1_domega0(0, 0)*invdet;
  invJ(0, 1) = -dx1_domega0(0, 1)*invdet;
  invJ(1, 0) = -dx1_domega0(1, 0)*invdet;
  const Eigen::Vector2d dx1(out_x - pred_x, out_y - pred_y);
  for(int i=0;i<2;i++)
  {
    dx += invJ(0, i)*dx1(i);
    dy += invJ(1, i)*dx1(i);
  }
  sqr_err = dx1(0)*dx1(0) + dx1(1)*dx1(1);
}
out_dx = pred_dx;
out_dy = pred_dy;
} break;