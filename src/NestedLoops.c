#include <stdio.h>

int main () {

  // nested loop = a loop inside of another loop

  int rows;
  int columns;
  char symbol;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  while ((getchar()) != '\n'); // clear buffer

  printf("Enter the symbol: ");
  scanf("%c", &symbol);

  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      printf("%c", symbol);
    }
    printf("\n");
  }

  return 0;
}