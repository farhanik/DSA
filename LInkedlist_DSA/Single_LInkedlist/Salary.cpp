#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Emp {
  char name[100];
  int id;
  int salary;
  
  struct Emp *link;
};

typedef struct Emp *emp;

int main()
{
    struct Emp* current;
    struct Emp* head;
    struct Emp* highest_paid_emp;
    
    current = (Emp*) malloc(sizeof(Emp));
    head = current;
    
    int n;
    printf("How many employyes do you have?\n");
    scanf("%d", &n);
    getchar();
    
    for (int i = 0; i < n; i++) {
        printf("Enter employee name %d:\n", i + 1);
        fgets(current->name, sizeof(current->name), stdin);
        current->name[strcspn(current->name, "\n")] = '\0';

        printf("Enter employee id %d:\n", i + 1);
        scanf("%d", &current->id);
        getchar();

}