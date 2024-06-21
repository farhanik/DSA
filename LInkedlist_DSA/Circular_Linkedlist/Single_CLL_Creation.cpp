#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
int pos;
Node *head,*newnode,*temp,*tail;
void Inser_At_First()
{
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=7;
    newnode->next=0;

    newnode->next=head;
    head=newnode;
    tail->next=head;
}
void Insert_At_Anypos()
{
    printf("Enter Any Position = ");
     scanf("%d",&pos);
     temp=head;
     for(int i=1; i<pos-1 && temp !=0 ; i++)
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
        newnode->data=8;
        newnode->next=0;

        newnode->next=temp->next;
        temp->next=newnode;
     }
}
void Insert_At_Last()
{
    newnode=(Node*)malloc(sizeof(Node));
     newnode->next=0;
     newnode->data=67;

     tail->next=newnode;
     newnode->next=head;
     tail=newnode;
     temp=newnode;
}

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
     //Inser_At_First();
     //Insert_At_Anypos();
     //Insert_At_Last();

    temp=head;
    while(temp->next !=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);

    //printf("%d",temp->next->data);//Check of circular linked list
}
