#include <stdio.h>

enum Day {
  Sun = 1,
  Mon = 2,
  Tue = 3,
  Wed = 4,
  Thu = 5,
  Fri = 6,
  Sat = 7
};

int main () {

  // enum = a user defined type of named integer identifiers
  //        helps to make a program more readable

  enum Day today = Sat;

  // printf("Today is %d\n", today); // enums are not strings, but they can be treated as int

  if ( today == Sun || today == Sat ) {
    printf("It's the weekend!\n");
  } else {
    printf("It's a workday!\n");
  }

  return 0;
}