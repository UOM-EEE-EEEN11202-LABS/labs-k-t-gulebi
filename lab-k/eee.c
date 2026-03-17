#define _USE_MATH_DEFINES
#include <complex.h>
#include <math.h>
#include <stdio.h>

int main(void) {
  // float rt = 0;

  // for (int i = 0; i < 10; i++) {
  //   rt += 1.0 / ((i + 1) * 10 * 1000);
  // }

  // rt = 1 / rt;

  // printf("Result: %f\n", rt);

  int f = 160 * 1000;      // angular frequency
  double w = 2 * M_PI * f; // angular frequency in radians per second
  double c = 1e-9;         // capacitance in farads
  double a = 5;            // V
  double phi = 0;          // radians

  double z1 = 1000;
  double complex z2 = 1 / (I * w * c);
  double complex vin = a * cexp(I * phi);

  double complex vout = (z2 * vin) / (z1 + z2);

  printf("Magnitude of output voltage: %f\n", cabs(vout));
  printf("Phase of output voltage (radians): %f\n", carg(vout));

  return 0;
}