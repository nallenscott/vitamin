#include <stdio.h>
#include <math.h>

int main () {

  const double PI = 3.14159265358979323846;
  double radius;
  double circumference;
  double area;

  printf("\nEnter the radius of the circle: ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * pow(radius, 2);

  printf("\nThe circumference of the circle is %lf.\n", circumference);
  printf("The area of the circle is %lf.\n", area);

  return 0;
}