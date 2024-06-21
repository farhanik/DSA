#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head,*newnode,*temp;
int main()
{
    head=0;
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=1;
    newnode->next=0;

    head=newnode;

    head->next=(Node*)malloc(sizeof(Node));
    head->next->data=2;
    head->next->next=(Node*)malloc(sizeof(Node));
    head->next->next->data=3;
    head->next->next->next=0;

    temp=head;

    while(temp != 0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    return 0;
}