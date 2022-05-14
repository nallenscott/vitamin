#include <stdio.h>

void sort (char *array, int size) {
  int i, j, temp;
  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray (char *array, int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%c ", array[i]);
  }
  printf("\n");
}

int main () {

  // int array[] = {5, 2, 4, 6, 1, 3};

  char array[] = {'F', 'A', 'C', 'E', 'B', 'D'};

  int size = sizeof(array) / sizeof(array[0]);

  sort(array, size);
  printArray(array, size);

  return 0;
}