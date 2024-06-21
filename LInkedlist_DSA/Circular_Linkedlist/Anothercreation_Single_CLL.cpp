#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;

Node *newnode,*temp,*tail;
int main()
{
    
    for(int i=0 ; i<10 ; i++)
    {
        newnode=(Node*)malloc(sizeof(Node));
        newnode->data=i+1;
        newnode->next=0;

        if(tail==0)
        {
            tail=temp=newnode;
            tail->next=newnode;

        }
        else
        {
          newnode->next=tail->next;
          tail->next=newnode;
          tail=temp=newnode;
        }
        
    }
    if(tail==NULL)
    {
        printf("Empty List");
    }
    else
    {
    temp=tail->next;
    while(temp->next != tail->next)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
    }

    //printf("%d",temp->next->data);//Check of circular linked list
}
