#include <stdio.h>
#include <stdlib.h>

struct Node {
  char x;
  int y;
  struct Node* link;
};

typedef struct Node node; 

int main() {
  struct Node* current;
  struct Node* head;
  current = (struct Node*)malloc(sizeof(struct Node));
  head = current;

  int ascii = 97;
  for (int i = 0; i < 26; i++) {
    current->x = (char)ascii;
    ascii++;
    current->y = i+1;

    if (i < 25) {
      current->link = (struct Node*)malloc(sizeof(struct Node));
      current = current->link;
    } else {
      current->link = NULL;
    }
  }

  current = head; 

  while (current != NULL) {
    printf("%c %d\n", current->x, current->y);
    struct Node* temp = current;
    current = current->link;
    free(temp); 
  }

  return 0;
}