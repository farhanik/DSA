#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int pos;
typedef struct node Node;
Node *newnode,*head,*temp,*tail;


int main()
{
    head=NULL;
    for(int i=0; i<10 ; i++)
    {
        newnode=(Node*)malloc(sizeof(Node));
        newnode->data= i+1;
        newnode->next= 0;
        newnode->prev= 0;
      if(head==NULL)
      {
        head=temp=tail=newnode;
        tail->next=head;
        tail->prev=head;
      }
      else
      {
       tail->next=newnode;
       newnode->prev=tail;
       newnode->next=head;
       tail->prev=newnode;
       tail=temp=newnode;
      }
     
    }
  


      temp=head;

      while(temp->next != head)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }
      printf("%d ",temp->data);

      //printf("%d",temp->next->data);//proof of CLL

      return 0;

    }