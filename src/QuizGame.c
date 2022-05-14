#include <stdio.h>
#include <ctype.h>

int main () {

  char questions[][100] = {
    "1. What year did the C language first appear?",
    "2. Who is credited with creating the C programming language?",
    "3. What is the predecessor of C programming language?"
  };

  char options[][100] = {
    "A. 1969", "B. 1972", "C. 1980", "D. 1999",
    "A. Dennis Ritchie", "B. Ken Thompson", "C. John McCarthy", "D. Benoit Mandel",
    "A. Objective C", "B. B", "C. C++", "D. C#",
  };

  char answers[3] = {
    'B', 'A', 'B',
  };

  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

  char guess;
  int score = 0;

  printf("Welcome to the C Quiz Game!\n");

  for (int i = 0; i < numberOfQuestions; i++) {
    printf("%s\n", questions[i]);
    for (int j = (i * 4); j < (i * 4) + 4; j++) {
      printf("%s\n", options[j]);
    }
    printf("Your answer: ");
    scanf("%c", &guess);
    while (getchar() != '\n');

    guess = toupper(guess);

    if (guess == answers[i]) {
      printf("Correct!\n");
      score++;
    } else {
      printf("Incorrect!\n");
    }
  }

  printf("You scored %d out of %d.\n", score, numberOfQuestions);

  return 0;
}