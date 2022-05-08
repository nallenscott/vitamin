#include <stdio.h>
#include <stdbool.h>

int main () {

  float temp = 25;
  bool sunny = true;

  // logical operators = && (AND) checks if two conditions are true

  // if (temp >= 0 && temp <= 30 && sunny) {
  //   printf("The weather is good!\n");
  // } else {
  //   printf("The weather is bad!\n");
  // }

  // logical operators = || (OR) checks if one of two conditions is true

  // if (temp <= 0 || temp >= 30) {
  //   printf("The weather is bad!\n");
  // } else {
  //   printf("The weather is good!\n");
  // }

  // logical operators = ! (NOT) reverses the state of a condition

  if (!sunny) {
    printf("It's cloudy outside!\n");
  } else {
    printf("It's sunny outside!\n");
  }

  return 0;
}