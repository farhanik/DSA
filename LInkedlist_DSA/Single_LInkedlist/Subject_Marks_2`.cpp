#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int id;
    int mark_1;
    int mark_2;
    int mark_3;
    int total_marks;
    struct Student* link;
};

typedef struct Student node;

int main() {
    int n;
    struct Student* current;
    struct Student* head;
    struct Student* highest_total_marks_student;

    current = (node*)malloc(sizeof(node));
    head = current;

    printf("How many students do you have?\n");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter student name %d:\n", i + 1);
        fgets(current->name, sizeof(current->name), stdin);
        current->name[strcspn(current->name, "\n")] = '\0';

        printf("Enter student id %d:\n", i + 1);
        scanf("%d", &current->id);
        getchar();

        printf("Enter student %d subject 1 number:\n", i + 1);
        scanf("%d", &current->mark_1);
        getchar();
        printf("Enter student %d subject 2 number:\n", i + 1);
        scanf("%d", &current->mark_2);
        getchar();
        printf("Enter student %d subject 3 number:\n", i + 1);
        scanf("%d", &current->mark_3);
        getchar();

        current->total_marks = current->mark_1 + current->mark_2 + current->mark_3;

        if (i < n - 1) {
            current->link = (node*)malloc(sizeof(node));
            current = current->link;
        }
    }

    current->link = NULL;
   
    highest_total_marks_student = head;
    current = head->link;
    while (current != NULL) {
        if (current->total_marks > highest_total_marks_student->total_marks) {
            highest_total_marks_student = current;
        }
        current = current->link;
    }

    printf("\nStudent with the highest total marks:\n");
    printf("Name: %s\n", highest_total_marks_student->name);
    printf("ID: %d\n", highest_total_marks_student->id);
    printf("Total Marks: %d\n", highest_total_marks_student->total_marks);

    return 0;
}
