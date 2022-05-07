#include <stdio.h>
#include <stdbool.h>

int main () {

  char a = 'C';                 // single character %c
  char b[] = "Bro";             // array of characters %s

  float c = 3.141592;           // 4 bytes (32 bits of precision) 6-7 digits %f
  double d = 3.151592653589793; // 8 bytes (64 bits of precision) 15-16 digits %lf 

  bool e = true;                // 1 byte (true or false) %d

  char f = 120;                 // 1 byte (-128 to 127) %d or %c
  unsigned char g = 255;        // 1 byte (0 to 255) %d or %c

  short h = 32767;              // 2 bytes (-32768 to 32767) %d
  unsigned short i = 65535;     // 2 bytes (0 to 65535) %d

  int j = 2147483647;           // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
  unsigned int k = 429496729;  // 4 bytes (0 to 4,294,967,295) %u

  long l = 9223372036854775807;            // 8 bytes (-9,223,372,036,854,775,807 to 9,223,372,036,854,775,807) %ld
  unsigned long m = 18446744073709551615U; // 8 bytes (0 to 1,844,674,037,374,955,615) %lu

  // printf( "%c\n", a );  // char
  // printf( "%s\n", b );  // character array
  // printf( "%f\n", c );  // float
  // printf( "%lf\n", d ); // double
  // printf( "%d\n", e );  // bool
  // printf( "%d\n", f );  // char as numeric value
  // printf( "%d\n", g );  // unsigned char as numeric value
  // printf( "%d\n", h );  // short
  // printf( "%d\n", i );  // unsigned short
  // printf( "%d\n", j );  // int
  // printf( "%u\n", k );  // unsigned int
  printf( "%ld\n", l ); // long
  printf( "%lu\n", m ); // unsigned long
}