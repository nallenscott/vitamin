#include <stdio.h>

int main () {

  FILE *pF = fopen("./../fixture.txt", "r"); // w - write, r - read, a - append

  char buffer[255];

  if (pF != NULL) {
    while (fgets(buffer, 255, pF) != NULL) {
      printf("%s", buffer);
    }
    fclose(pF);
  } else {
    printf("Unable to open the file.\n");
  }

  return 0;
}