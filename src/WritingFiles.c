#include <stdio.h>

int main () {

  FILE *pF = fopen("test.txt", "w"); // w - write, r - read, a - append

  fprintf(pF, "Supercalifragilisticexpialidocious!\n");

  fclose(pF);

  if (remove("test.txt") == 0) {
    printf("File deleted successfully.\n");
  } else {
    printf("Unable to delete the file.\n");
  }

  return 0;
}
