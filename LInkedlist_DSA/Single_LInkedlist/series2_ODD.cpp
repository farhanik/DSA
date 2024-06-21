
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *new_node;
    
    new_node = (struct Node*) malloc(sizeof(struct Node));
    head = new_node;
    
    for(int i = 1; i < 100; i++){
       if( i%2 != 0){
        new_node -> data = i;
        new_node -> next = (struct Node*) malloc(sizeof(struct Node));
        new_node = new_node -> next;
       }
    }
    
    new_node -> next = NULL;
    
    while(head -> next != NULL){
        printf("%d\n",head->data);
        head = head -> next;
    }
    
    return 0;
}