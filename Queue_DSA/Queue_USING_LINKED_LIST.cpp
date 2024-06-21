#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *temp, *newnode;
Node *front=0;
Node *rear=0;

void enqueue(int x)
{
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    newnode->next=0;

    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    temp=front;
    if(front==0 && rear==0)
    {
      printf("Empty");
    }
    else
    {
    front=temp->next;
    free(temp);

    }
}

void peek()
{
     
    if(front==0 && rear==0)
    {
      printf("Empty");
    }
    else
    {
        printf("%d",front->data);
    }
}
void display()
{
    temp=front;
    if(front==0 && rear==0)
    {
      printf("Empty");
    }
    else
    {
      while(temp != 0)
      {
        printf("%d",temp->data);
        temp=temp->next;
      }
    } 
}

void size()
{
    int sz=0;
    temp=front;
    while(temp !=0 )
    {
       sz++;
       temp=temp->next;   
    }
    printf("%d ",sz);
}

int main()
{
    enqueue(1);
    enqueue(7);
    enqueue(7);
    enqueue(9);
    dequeue();
    display();
    size();
    peek();
}