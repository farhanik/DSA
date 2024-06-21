#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data;
    struct node *next;
    struct node *prev;
};
typedef struct node Node;

Node *head=NULL, *newnode, *temp , *tail=NULL, *current , *nextnode;
char str[100];

void create_Node(Node **head, char data)
{
    newnode=(Node*)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        temp = newnode;
        tail = newnode;
    }
    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
        tail = temp;
    }
}

int main()
{
    printf("Enter a string= ");
    fgets(str, sizeof(str), stdin);

    int l = strlen(str);

    for (int i = 0; i < l; i++)
    {
        if(str[i] != '\n'){
        create_Node(&head, str[i]);
        }
    }

    temp = head;
    int c = 0;
    while (temp != NULL)
    {
        str[c++] = temp->data;
        temp = temp->next;
    }
    str[c] = '\0';
    /*current = head;
    while (current != NULL)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;*/

    int pal = 1;
    int i = 0;
    temp = tail;

    while (temp != NULL)
    {
        if (temp->data != str[i])
        {
            pal = 0;
            break;
        }
        temp = temp->prev;
        i++;
    }

    if (pal == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not");
    }

    return 0;
}
