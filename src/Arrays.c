#include <stdio.h>

int main () {

  // array = a data structure that can store many values of the same data type

  double prices[10] = {1.23, 2.34, 3.45, 4.56, 5.67}; // array of 5 doubles

  prices[0] = 1.11; // change the first value in the array
  prices[1] = 2.22;
  prices[2] = 3.33;
  prices[3] = 4.44;
  prices[4] = 5.55;

  printf("$%.2lf\n", prices[0]); // print the first value in the array

  return 0;
}