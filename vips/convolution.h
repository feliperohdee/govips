// https://libvips.github.io/libvips/API/current/libvips-convolution.html

#include <stdlib.h>
#include <./bin/include/vips/vips.h>

int gaussian_blur_image(VipsImage *in, VipsImage **out, double sigma);
int sharpen_image(VipsImage *in, VipsImage **out, double sigma, double x1,
                  double m2);
