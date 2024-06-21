#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};
typedef struct node Node;
Node *head=NULL;
Node *newnode,*temp,*sorted;

void createnode(int val)
{
    newnode = new Node;
    newnode->data = val;
    newnode->next = NULL;
    
    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}

void display()
{
    temp=head;
    while(temp != 0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void sortedinsert(Node *newnode)
{
       if(sorted==NULL || sorted->data>=newnode->data)
       {
          newnode->next=sorted;
          sorted=newnode;

       }
       else
       {
          Node *traverse=sorted;

          while(traverse->next != NULL && traverse->next->data < newnode->data)
          {
            traverse=traverse->next;
          }
          newnode->next=traverse->next;
          traverse->next=newnode;
       }
}

void Insertionsort(Node *current)
{
    Node *next;
    current=head;
    while(current != NULL)
    {
    next=current->next;

    sortedinsert(current);
    
    current=next;
    }
    head=sorted;
}



int main()
{
    createnode(20);
    createnode(10);
    createnode(40);
    createnode(90);
    display();
    cout<<"\n";
    Insertionsort(head);
    display();
}