#include<stdio.h>
#define max 5

int stack [max];

int top=-1;

void push(int x)
{
    if(top == max-1)
    {
        printf("Can not insert");
    }
    else
    {
      top++;
      stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Can not delete");
    }
    else
    {
      int d=stack[top];
      printf("Popped Data = %d", d);
      top--;

    }
}
void peek()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf(" Top Data = %d",stack[top]);
    }
}
void Display()
{
    for(int i=top ; i>=0 ; i--)
    {
        printf(" %d ",stack[i]);
    }
}
void Reverse_Display()
{
    for(int i=0 ; i<=top ; i++)
    {
        printf(" %d ",stack[i]);
    }
}

int main()
{
    push(2);
    push(3);
    push(4);
    push(5);

    pop();
    printf("\n");
    pop();
    printf("\n");
    Display();
}

