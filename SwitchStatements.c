#include <stdio.h>

int main () {

  // switch = A more efficient alternative to using may if-else statements
  //          allows a vluae to be tested for equality against many cases

  char grade;

  printf("Enter your grade: ");
  scanf(" %c", &grade);

  switch (grade) {
    case 'A':
      printf("Perfect!\n");
      break;
    case 'B':
      printf("You did good!\n");
      break;
    case 'C':
      printf("You did okay!\n");
      break;
    case 'D':
      printf("At least it's not an F!\n");
      break;
    case 'F':
      printf("You failed!\n");
      break;
    default:
      printf("Invalid grade!\n");
  }

  return 0;
}