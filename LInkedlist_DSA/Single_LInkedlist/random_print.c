#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;

    struct node *next;
};

typedef struct node Node;
Node *newnode, *head, *temp;

int main()
{

    int choice, C;
    head = NULL;
    while ( choice )
    {
        newnode = (Node *)malloc(sizeof(Node));
        printf("Enter Data= ");
        fflush(stdin);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter choice 1 or 0 = ");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}
