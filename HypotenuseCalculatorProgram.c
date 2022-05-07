#include <stdio.h>
#include <math.h>

int main () {

  double A;
  double B;
  double C;

  printf("Enter the length of side A: ");
  scanf("%lf", &A);

  printf("Enter the length of side B: ");
  scanf("%lf", &B);

  C = sqrt(A*A + B*B);

  printf("The length of side C is %.2lf\n", C);

  return 0;
}