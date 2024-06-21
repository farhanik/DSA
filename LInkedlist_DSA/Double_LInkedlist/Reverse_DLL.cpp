#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;

};

typedef  struct node Node;

Node *head,*newnode,*tail,*temp,*current,*nextnode;

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
        head=newnode;
        temp=newnode;
        tail=newnode;
      }
      else
      {
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
        tail=temp;
      }
    }

      temp=head;

      while(temp != 0)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }
printf("\n");

/*temp=tail;
while(temp !=0 )//Simple reversing way of DLL.
{   

    printf("%d ",temp->data);
    temp=temp->prev;
    
}*/
     current=nextnode=head;

     while(nextnode != 0)
     {
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
     }
     temp=tail;
     current=head;
     head=tail;
     tail=current;
     while(temp !=0 )
     {
        printf("%d ",temp->data);
        temp=temp->next;
     }



      return 0;

    }


