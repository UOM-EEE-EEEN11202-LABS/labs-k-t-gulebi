#include <math.h>
#include <stdio.h>

int main(void) {
  double s = 100, u = 0, a = 10;

  double t = sqrt(2 * s / a);
  double v = u + a * t;

  printf("The final velocity is: %f\n", v);
  return 0;
}