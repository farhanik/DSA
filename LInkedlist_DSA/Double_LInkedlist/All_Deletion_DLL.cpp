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
void Delete_First(Node **head)
{
 temp=*head;
    temp->next->prev=0;
    *head=temp->next;
    free(temp);
}
void Delete_Anypos(Node **head)
{
       printf("Enter any position that you want to delete:");
    scanf("%d",&pos);
    temp=*head;
    for(int i=1; i<pos ; i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("Invalid Position");
    }
    else
    {
       temp->prev->next=temp->next;
       temp->next->prev=temp->prev;
       free(temp);
    }
}
void Delete_Last()
{
    tail=temp->prev;
    tail->next=0;
    temp->prev=0;
    free(temp);

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
 
    //Delete_First(&head);
    //Delete_Anypos(&head);
    //Delete_Last();
   
   
      temp=head;

      while(temp != 0)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }

      return 0;

    }
