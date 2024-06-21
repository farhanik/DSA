#include <stdio.h>
#include <stdlib.h>

struct Node {
  int x;
  int y;
  struct Node* link;
};

typedef struct Node node;

int main() {
  struct Node* current;
  struct Node* head;
  current = (struct Node*)malloc(sizeof(struct Node));
  head = current;

  int val = 1;
  for (int i = 0; i < 25; i++) {
    current->x = val;
    val++;
    current->y = val;
    val++;
    if (i < 24) {
      current->link = (struct Node*)malloc(sizeof(struct Node));
      current = current->link;
    } else {
      current->link = NULL;
    }
  }

  current = head; 

  while (current != NULL) {
    printf("%d %d\n", current->x, current->y);
    struct Node* temp = current;
    current = current->link;
    free(temp); 
  }

  return 0;
}