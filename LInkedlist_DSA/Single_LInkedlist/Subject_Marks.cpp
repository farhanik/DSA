
#include<stdio.h>
#include<stdlib.h>

struct Student{
    char name[100];
     int roll;
    int math_mark;
    int physics_mark;
    int chemistry_mark;
    struct Student* next;
};

typedef struct Student student;

int main()
{
    struct Student *head, *new_node;
    new_node = (student*) malloc(sizeof(student));
    head = new_node;

    int n;

    printf("How many students do you have?\n");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        fflush(stdin);
        printf("Enter Student No %d Information:\n",i+1);
        printf("Enter name :");
        gets(new_node->name);
        fflush(stdin);

        printf("Enter ID:");
        scanf("%d",&new_node->roll);
    
        printf("Enter math mark:");
        scanf("%d",&new_node->math_mark);
        
        printf("Enter physics mark:");
        scanf("%d",&new_node->physics_mark);

        printf("Enter Chemistry mark:");
        scanf("%d",&new_node->chemistry_mark);
        

        new_node->next= (student*) malloc(sizeof(student));
        new_node = new_node->next;

        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < n; i++){
        printf("Name = %s\nRoll = %d\nMath Mark = %d\nPhysics Mark = %d\nChemistry Mark = %d\n", head->name, head->roll, head->math_mark, head->physics_mark, head->chemistry_mark);
        head = head -> next;
    }
    return 0;
}