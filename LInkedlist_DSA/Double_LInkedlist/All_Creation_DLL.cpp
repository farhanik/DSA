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

void Insert_At_First(Node **head, int data)
{
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=data;
    newnode->next==0;
    newnode->prev=0;

    newnode->next=(*head);
    (*head)->prev=newnode;
    (*head)=newnode;
}
void Insert_At_Anypos(Node **head, int data)
{
   printf("Enter Position where you want to insert: ");
     scanf("%d",&pos);

     temp=*head;
     for(int i=1 ; i<pos-1 ; i++)
     {
      temp=temp->next;
     }
     if(temp==NULL)
     {
      printf("Invalid Position");
     }
     else
     {
      newnode=(Node*)malloc(sizeof(Node));
      newnode->next=0;
      newnode->prev=0;
      newnode->data=data;
     }
     newnode->next=temp->next;
     temp->next->prev=newnode;
     newnode->prev=temp;
     temp->next=newnode;

}
void Insert_At_Last(Node **head, int data)
{
     newnode=(Node*)malloc(sizeof(Node));
     newnode->data=data;
     newnode->next=0;
     newnode->prev=0;

     newnode->prev=tail;
     tail->next=newnode;
     tail=temp=newnode;
}
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

     // Insert_At_First(&head, 8);
    //Insert_At_Anypos(&head,8);
    //Insert_At_Last(&head,8);

      temp=head;

      while(temp != 0)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }

      return 0;

    }


