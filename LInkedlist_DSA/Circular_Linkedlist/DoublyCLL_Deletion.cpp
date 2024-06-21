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
    temp->next->prev=tail;
    *head=temp->next;
    tail->next=*head;
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
void Delete_Last(Node **head)
{
    tail=temp->prev;
    tail->next=*head;
    (*head)->prev=tail;
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
        tail->next=head;
        head->prev=tail;
    }
 
     //Delete_First(&head);
      //Delete_Anypos(&head);
      //Delete_Last(&head);
   
   
      temp=head;

      while(temp->next != head)
      {
        printf("%d ",temp->data);
        temp=temp->next;
      }
      printf("%d ",temp->data);

      //printf("%d",temp->next->data);


      return 0;

    }