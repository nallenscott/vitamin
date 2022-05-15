#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main () {

  char winner = ' ';
  char response = ' ';

  do {
    winner = ' ';
    response = ' ';

    resetBoard();

    while (winner == ' ' && checkFreeSpaces() != 0) {
      printBoard();

      playerMove();
      winner = checkWinner();
      if (winner != ' ' || checkFreeSpaces() == 0) {
        break;
      }

      computerMove();
      winner = checkWinner();
      if (winner != ' ' || checkFreeSpaces() == 0) {
        break;
      }
    }

    printBoard();
    printWinner(winner);

    printf("Play again? (y/n): ");
    while (getchar() != '\n');
    scanf("%c", &response);

  } while (toupper(response) == 'Y');

  printf("\nThanks for playing!\n");

  return 0;
}

void resetBoard () {
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      board[i][j] = ' ';
    }
  }
}

void printBoard () {
  // print the board as a grid with a border between each cell and between each row
  int i, j;
  for (i = 0; i < 3; i++) {
    if (i > 0 && i < 3) {
      // print a border between each row
      printf("---+---+---\n");
    }
    for (j = 0; j < 3; j++) {
      printf(" %c ", board[i][j]);
      if (j < 2) {
        printf("|");
      }
    }
    printf("\n");
  }
}
 
int checkFreeSpaces () {
  // check if there are any free spaces on the board
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (board[i][j] == ' ') {
        return 1;
      }
    }
  }
  return 0;
}

void playerMove () {
  int row, col;

  do {
    printf("Enter row number (1-3): ");
    scanf("%d", &row);
    row--;

    printf("Enter column number (1-3): ");
    scanf("%d", &col);
    col--;

    if (board[row][col] == ' ') {
      board[row][col] = PLAYER;
      break;
    } else {
      printf("Invalid move.\n");
    }
  } while (board[row][col] != ' ');
}

void computerMove () {
  srand(time(NULL));
  int row, col;

  if (checkFreeSpaces() > 0) {
    do {
      row = rand() % 3;
      col = rand() % 3;
    } while (board[row][col] != ' ');

    board[row][col] = COMPUTER;
  } else {
    printWinner(' ');
  }
}

char checkWinner () {
  int i, j, k;
  
  // check rows
  for (i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
        return board[i][0];
    }
  }

  // check columns
  for (j = 0; j < 3; j++) {
    if (board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
        return board[0][j];
    }
  }

  // check diagonals
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
      return board[0][0];
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
      return board[0][2];
  }

  return ' ';
}

void printWinner (char winner) {
  if (winner == PLAYER) {
    printf("You won!\n");
  } else if (winner == COMPUTER) {
    printf("Computer won!\n");
  } else {
    printf("It's a tie!\n");
  }
}