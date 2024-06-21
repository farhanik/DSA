#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head,*newnode,*temp,*tail;

int main()
{
    head=0;
    for(int i=0 ; i<10 ; i++)
    {
        newnode=(Node*)malloc(sizeof(Node));
        newnode->data=i+1;
        newnode->next=0;

        if(head==0)
        {
            head=temp=tail=newnode;

        }
        else
        {
          temp->next=newnode;
          temp=temp->next;
          tail=temp;
        }
        temp->next=head;
    }
    
    temp=head;
    while(temp->next !=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);

    printf("\n");

    Node *current,*prevnode,*nextnode;
    prevnode=0;
    current=nextnode=head;
    if(head==NULL)
    {
        printf("Empty List");
    }
    else
    {
        while(current != tail)
        {
            prevnode=current;
            current=nextnode;
            nextnode=current->next;
            current->next=prevnode;
        }
        nextnode->next=tail;
        head=tail;
        tail=nextnode;
    }
    temp=head;
    while(temp->next !=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);


    //printf("%d",temp->next->data);//Check of circular linked list
}
