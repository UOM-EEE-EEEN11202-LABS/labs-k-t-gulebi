#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

int main(void) {
  // define the email
  static const char email[] = "gleb.ivanov@student.manchester.ac.uk";
  double height = 0;
  double radius = 2.2;
  double volume = 0;
  printf("Enter height: ");
  scanf("%lf", &height);

  // Your code in this section

  if (height < 0) {
    printf("Error.\n");
    return 1; // Exit with an error code
  }

  volume = M_PI * pow(radius, 2) * height;

  // Do not edit below here
  printf("%s\n", email);
  printf("Volume: %.2f\n", volume);
  return 0;
}