#include <stdio.h>

int main () {

  // memory = an array of bytes within RAM (street)
  // memory block = a single unit (byte) within memory, used to hold some value (person)
  // memory address = the address of where a memory block is located (house address)

  char a = 'X';
  char b = 'Y';
  char c = 'Z';

  printf("%lu bytes\n", sizeof(a)); // 1 byte
  printf("%lu bytes\n", sizeof(b));
  printf("%lu bytes\n", sizeof(c));

  printf("%p\n", &a); // prints the address of a
  printf("%p\n", &b);
  printf("%p\n", &c);

  return 0;
}