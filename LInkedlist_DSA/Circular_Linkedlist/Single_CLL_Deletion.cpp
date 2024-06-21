#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
int pos;
Node *head,*newnode,*temp,*tail;
void Delete_At_First()
{
    temp=head;
    head=temp->next;
    tail->next=head;
    free(temp);

}

void Delete_At_Anypos()
{
    printf("Enter Any Position = ");
     scanf("%d",&pos);
     temp=head;
     Node *prev=0;
     for(int i=1; i<pos && temp !=0 ; i++)
     {
         prev=temp;
         temp=temp->next;
     }
     if(temp==NULL)
     {
        printf("Invalid Position");
     }
     else
     {
        
       prev->next=temp->next;
       free(temp);
        
     }
}
void Delete_At_Last()
{
      tail=head;
    if(head->next == NULL)
    {
        free(head);
    }
    while(tail->next != temp)
    {
        tail=tail->next;
    }
   
    tail->next=head;

    free(temp);
    temp=tail;

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
    //Delete_At_First();
    //Delete_At_Anypos();
    Delete_At_Last();
     
    temp=head;
    while(temp->next !=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);

    //printf("%d",temp->next->data);//Check of circular linked list
}
