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
    for(int i=0 ; i<10 ; i++)
    {
        newnode=(Node*)malloc(sizeof(Node));
        newnode->data=i+1;
        newnode->next=0;

        if(head==0)
        {
            head=temp=newnode;

        }
        else
        {
          temp->next=newnode;
          temp=temp->next;
          
        }
        
    }
    
    temp=head;
    while(temp != 0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    

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
        while(nextnode != 0)
        {
            nextnode=current->next;
            current->next=prevnode;
            prevnode=current;
            current=nextnode;
            
        }
       head=prevnode;
    }
    temp=head;
    while(temp != 0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
