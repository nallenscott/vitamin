#include <stdio.h>

double square(double x) {

  return x * x;
}

int main () {

  double x = square(3.14);
  printf("The square of 3.14 is %f.\n", x);

  return 0;
}