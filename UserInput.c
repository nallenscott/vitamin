#include <stdio.h>
#include <string.h>

int main () {

  char name[25]; // bytes
  int age;

  printf("What's your name? ");

  // The %24s will limit the number of characters written into the array to 
  // 24 characters plus the terminating null character (25 in total). If you
  // don't add this, then there will be no limit, so if the user enters more
  // than 24 characters, you will have a buffer overflow, which will probably
  // overwrite important parts of your program, possibly causing your program
  // to crash or misbehave in other ways.

  // scanf("%24s", name); // no need to add &, because `name` is already a pointer

  // This doesn't support white space, so if you want to allow white space,
  // you'll need to use a different function.

  fgets(name, 25, stdin);        // fgets adds a newline character to the end of the string
  name[strlen(name) - 1] = '\0'; // this removes the newline character

  printf("\nHow old are you? ");
  scanf("%d", &age);

  printf("\nHello %s, you are %d years old.\n", name, age);

  return 0;
}