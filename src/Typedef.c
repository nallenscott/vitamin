#include <stdio.h>

// typedef char user[25];

typedef struct {
  char name[25];
  char password[12];
  int id;
} User;

int main () {

  // typedef = reserved keyword that gives an existing datatype a "nickname"

  User user1 = {"John", "password", 1};
  User user2 = {"Jane", "password", 2};

  printf("%s has an id of %d\n", user1.name, user1.id);
  printf("%s has an id of %d\n", user2.name, user2.id);

  return 0;
}