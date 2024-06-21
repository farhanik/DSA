#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;

   struct node *next;
};

typedef struct node Node;
 Node *newnode,*head,*temp;

void Insert_First(Node **head,int data)
{
    
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data = data ;
    newnode->next=0;
    newnode-> next = *head;
    *head=newnode;

}

void Insert_Anyposition(Node **head,int pos)
{
    int pos;
    printf("Enter the Position = ");
    scanf("%d",&pos);

    temp=*head;
    for(int i=1; i<pos-1 && temp != 0 ; i++)
    {
       temp=temp->next;
    }
    if(temp==0)
    {
        printf("Invalid Position");
    }
    else
    {
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=66;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
void Insert_Last(Node **head, int data)
{
    temp=*head;
    while(temp->next != NULL)
    {
           temp=temp->next;
    }
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data = data;
    newnode-> next = 0;
    temp->next=newnode;
    temp=newnode;

}


int main()
{
    
    head=NULL;
    for (int i=0 ; i<10 ; i++)
    {
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data = i+1;
    newnode->next = NULL ;  
    if(head == NULL)
    {
        head=temp=newnode;
    } 
    else
    {
         temp->next=newnode;
         temp=newnode;
    }
    
    }
     
    //Insert_First(&head,4);
     Insert_Anyposition(&head,4);
    //Insert_Last(&head, 130);

    temp = head;
    int count=0;
    while(temp != NULL)
    {
        count++;
        printf(" %d ",temp->data);
        temp=temp->next;
        
    }
    printf("\n");

    printf("Total Nodes are = %d",count);

    return 0;
} 
