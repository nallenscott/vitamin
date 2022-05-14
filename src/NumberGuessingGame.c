#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  const int MIN = 1;
  const int MAX = 100;
  int guess;
  int guesses;
  int answer;

  // uses the current time as a seed for the random number generator
  srand(time(0));

  // generate a random number between 1 and 100
  answer = (rand() % MAX) + MIN;

  do {
    printf("Guess a number between %d and %d: ", MIN, MAX);
    scanf("%d", &guess);
    if (guess > answer) {
      printf("Too high!\n");
    } else if (guess < answer) {
      printf("Too low!\n");
    } else {
      printf("You got it!\n");
    }
    guesses++;
  } while ( guess != answer );

  printf("The answer was %d. You guessed it in %d guesses.\n", answer, guesses);

  return 0;
}