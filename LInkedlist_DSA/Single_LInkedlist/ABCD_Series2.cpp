#include<stdio.h>
#include<stdlib.h>

struct Node {
    int num;
    char ch;
    struct Node *next;
};

int main() {
    struct Node *head, *current, *temp;

    current = (struct Node*) malloc(sizeof(struct Node));
    head = current;

    int ascii = 97;
    for (int i = 0; i < 26; i++) {
        current->num = i + 1;
        current->ch = (char) ascii;
        ascii++;

        current->next = (struct Node*) malloc(sizeof(struct Node));
        current = current->next;
        if (i == 24) {
            temp = current;
        }
    }

    current->next = NULL;

    struct Node *newHead, *anotherHead;
    newHead = head;
    anotherHead = head;

    printf("Original List:\n");
    while (head->next != NULL) {
        printf("%d %c\n", head->num, head->ch);
        head = head->next;
    }

    struct Node *new_node;
    new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->num = 100;
    new_node->ch = 'A';
    new_node->next = newHead->next;
    newHead->next = new_node;

    printf("\nList after insertion at the beginning:\n");
    while (newHead->next != NULL) {
        printf("%d %c\n", newHead->num, newHead->ch);
        newHead = newHead->next;
    }

    // Free allocated memory for the temporary node
    free(temp);

    printf("\nList after freeing temporary node:\n");
    while (anotherHead->next != NULL) {
        printf("%d %c\n", anotherHead->num, anotherHead->ch);
        anotherHead = anotherHead->next;
    }

    // Free allocated memory for the rest of the nodes
    while (head != NULL) {
        struct Node *nextNode = head->next;
        free(head);
        head = nextNode;
    }

    return 0;
}
