#include <stdio.h>
#include <string.h>

int main () {

  char cars[][8] = {
    "Volvo",
    "BMW",
    "Ford",
    "Mazda"
  };

  strcpy(cars[0], "Tesla"); // strcpy copies a string from one location to another

  for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
    printf("%s\n", cars[i]);
  }

  return 0;
}