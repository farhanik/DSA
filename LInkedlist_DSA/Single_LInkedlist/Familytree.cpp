#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node{
    char FName[50];
    char MName[50];
    struct Node *next; 
};
int main()
{
    struct Node *head;
    head = NULL;
    struct Node *current,*temp;
    for(int i=0;i<5;i++){
    current=(struct Node*)malloc(sizeof(struct Node));
    
    printf("Enter Your Father Name %d : ",i+1);
    fflush(stdin);
    gets(current->FName);
    printf("Enter your Mother Name   %d : ",i+1);
    gets(current->MName);

    

    if(head==NULL)
    {
        head=temp=current;
    }
    else
    {
        temp->next=current;
        temp=current;
    }
    
    
    
    
    }
    
    temp = head;
    while(temp!=NULL)
    {
        printf("%s \n %s",temp->FName,temp->MName);
        temp=temp->next;
        free(temp);
    }
  return 0;
    
}
