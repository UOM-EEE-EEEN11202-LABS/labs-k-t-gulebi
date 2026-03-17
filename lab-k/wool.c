#include <stdbool.h>
int main(void) {

  // Declare variables
  bool x, y, a1, a2;

  // Using the variables
  x = false;
  y = true;
  a1 = x || y; // or
  a2 = x && y; // and

  bool a = (!x || (y && x)) && !y;

  return 0;
}
