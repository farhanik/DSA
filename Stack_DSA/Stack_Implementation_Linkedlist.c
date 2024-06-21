#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *newnode, *temp;
Node *top = 0;
Node *temporarystack = 0; // For reversing using another stack.

void push(Node **top, int x)
{
    newnode = (Node *)malloc(sizeof(Node));
    newnode->data = x;
    newnode->next = *top;
    *top = newnode;
}
int pop(Node **top) // used int, to save the popped data in a variable and returning the same variable.
{
    temp = *top;
    if (top == 0)
    {
        printf("Empty");
    }
    else
    {
        // printf("Popped Data = %d ",(*top)->data);
        int da = (*top)->data;
        *top = (*top)->next;
        free(temp);
        return da;
    }
}
void peek(Node **top)
{
    if (*top == 0)
    {
        printf("Empty");
    }
    else
    {
        printf("Top data = %d \n", (*top)->data);
    }
}

void Display(Node **top)
{
    temp = *top;
    if (*top == 0)
    {
        printf("Empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void Reverse()
{ // Reversing a stack using an another temporary stack
    int R;
    while (top != 0)
    {
        R = pop(&top);
        push(&temporarystack, R);
    }

    Display(&temporarystack);
}

void reverse() // Using Single linked list reverse method to reverse a stack elements.
{
    Node *prev = 0;
    Node *next = 0;
    Node *current = top;

    while (current != 0)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    top = prev;
}

int main()
{
    push(&top, 2);
    push(&top, 4);
    push(&top, 5);
    //peek(&top);
    //pop(&top);
    //pop(&top);

    Display(&top);

     printf("\n");

    //Reverse();
    reverse();
    Display(&top);  
    
    

}
