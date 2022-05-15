#include <stdio.h>

void printAge(int *pAge) {
  printf("You are %d years old.\n", *pAge); // dereference
}

int main () {

  // POINTER = a "variable-like" reference that holds a memory address to another variable, array, etc.
  //           some tasks are performed more easily with pointers
  //           * = indirection operator (value at address)

  int age = 30;
  int *pAge = NULL; // good practice to initialize pointers to NULL
  pAge = &age; // pAge now points to the memory address of age

  // printf("address of age: %p\n", &age);
  // printf("address of pAge: %p\n", pAge);
  // printf("size of age: %lu bytes\n", sizeof(age));
  // printf("size of pAge: %lu bytes\n", sizeof(pAge));
  // printf("value of age: %d\n", age);
  // printf("value at stored address: %d\n", *pAge); // dereferencing

  printAge(pAge);

  return 0;
}