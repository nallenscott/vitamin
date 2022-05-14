#include <stdio.h>

int main () {

  // BITWISE OPERATORS = special operators used in bit level programming
  //                     (knowing binary is important for this topic)

  // & = AND
  // | = OR
  // ^ = XOR
  // << = LEFT SHIFT
  // >> = RIGHT SHIFT

  int x = 6;  // 0000 0110
  int y = 12; // 0000 1100
  int z = 0;  // 0000 0000

  z = x & y;  // 0000 0100
  printf("AND = %d\n", z);

  z = x | y;  // 0000 1110
  printf("OR = %d\n", z);

  z = x ^ y;  // 0000 1010
  printf("XOR = %d\n", z);

  z = x << 1; // 0000 1100
  printf("LEFT SHIFT = %d\n", z);

  z = x >> 1; // 0000 0011
  printf("RIGHT SHIFT = %d\n", z);

  return 0;
}