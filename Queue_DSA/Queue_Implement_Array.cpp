#include<stdio.h>
#include<stdlib.h>
#define max  6

int que [max];

int front = -1;
int rear = -1;

void enqueue(int x)
{
     if(rear == max-1)
     {
          printf("Queue is FUlll");
     }
     else if(front == -1 && rear == -1)
     {
        front=rear=0;
     }
     else
     {
        rear++;
        que[rear]=x;   
     }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");

    }
    else
    {
        front++;
    }
}

void Display()
{
  if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");

    }
    else
    {
        for(int i=front; i<=rear ; i++)
        {
            printf("%d ",que[i]);
        }
    }
}
void peek()
{
     if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");

    }
    else
    {
        printf("%d",que[front]);
    }
}

void reverse_display()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is Empty");

    }
    else
    {
        for(int i=rear; i>=front ; i--)
        {
            printf("%d ",que[i]);
        }
    }
}

int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    Display();

    peek();

    reverse_display();



}