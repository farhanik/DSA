#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head,*newnode,*temp;
char str[100];
void Delete_First(Node **head)
{
    temp=*head;
    *head=temp->next;
    free(temp);
}
void Delete_last(Node **head)
{
    temp=*head;
    Node *prevnode=0;
    while(temp->next != 0)
    {   
        prevnode=temp;
        temp=temp->next;
    }
    //We have to check if there is only one node available or not.If there is available one node the we have to free the node.
    if((*head)->next==NULL)    
    {
        
        free(*head);
    }
    else
    {
        //putting 0 on to the prevnode from the deletable one.
        prevnode->next=temp->next;
        free(temp);
    }
    
}
 void Delete_Any(Node **head)
 {
    int i=1,pos;
    printf("Enter the pos = ");
    scanf("%d",&pos);
    temp=*head;
    Node *prevnode=0;
    for(int i=1; i<pos && temp != 0 ; i++)
    {
        prevnode=temp;
       temp=temp->next;
    }
    if(temp==0)
    {
        printf("Invalid Position");
    }
    else
    {
        prevnode->next=temp->next;
        free(temp);
    }
 }
int main()
{
    head=0;
    for(int i=0 ; i<10 ; i++)
    {
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data= i+1;
    newnode->next= 0;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        
        temp->next=newnode;
        temp=temp->next;
    }
    }
   
   // Delete_last(&head);

   Delete_Any(&head);
   
   //Delete_First(&head);

    temp=head;
    while(temp != 0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    return 0;
}
