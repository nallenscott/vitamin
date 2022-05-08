#include <stdio.h>

void hello(char[], int); // Function Prototype

int main () {

  // function prototypes

  // WHAT IS IT?
  // Function declaration, w/o a body, before main()
  // Ensures that calls to a function are made with the correct arguments

  // IMPORTANT NOTES
  // Many C compilers do not check for parameter mathcing
  // Missing arguments will result in unexpected behavior
  // A function prototype causes the compiler to flag an error if arugments are missing

  // ADVANTAGES
  // 1. Easier to navigate a program w/ main() at the top
  // 2. Helps with debugging
  // 3. Commonly used in header files

  char name[] = "John";
  int age = 30;   

  hello(name, age);

  return 0;
}

void hello(char name[], int age) {
  printf("Hello, %s! You are %d years old.\n", name, age);
}