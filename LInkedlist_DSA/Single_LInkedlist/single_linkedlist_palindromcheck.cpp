#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char ch;
    struct node *next;
};

typedef struct node Node;

Node *head, *newnode, *temp, *nextnode, *prevnode, *currentnode;
char str[100];
char str1[100];

void create(Node **head, char Ch)
{

    newnode = (Node *)malloc(sizeof(Node));
    newnode->ch = Ch;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}
int main()
{

    printf("Enter the name = ");
    fflush(stdout);
    fgets(str, sizeof(str), stdin);

    int l = strlen(str);

    if (str[l - 1] == '\n')//newline removing
    {
        str[--l] = '\0';
    }

    for (int i = 0; i < l; i++)
    {
        create(&head, str[i]);
    }


    int m = 0;
    temp = head;
    while (temp != NULL)
    {
        str[m++] = temp->ch;
        temp = temp->next;
    }

    str[m] = '\0';

    

    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;


    int pal = 1;
    int i = 0;
    temp = head;
    while (temp != NULL)
    {
        if (temp->ch != str[i])
        {
            pal = 0;
            break;
        }
        temp = temp->next;
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
