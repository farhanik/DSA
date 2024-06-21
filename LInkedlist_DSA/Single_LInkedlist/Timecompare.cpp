#include<stdio.h>
#include<stdlib.h>

struct Date{
    int day;
    int month;
    int year;
    struct Date* link;
};

typedef struct Date date;

int main()
{
    struct Date *head, *current;
    current = (date*) malloc(sizeof(date));
    head = current;

    printf("Enter first date month year  :\n");
    scanf("%d %d %d",&current->day,&current->month,&current->year);

    current -> link = (date*) malloc(sizeof(date));
    current = current -> link;

    printf("Enter second date month year ( seperated by spaces ) :\n");
    scanf("%d %d %d",&current->day,&current->month,&current->year);

    if(head->year <= head->link->year && head->month <= head->link->month) {
        if(head->day < head->link->day){
            printf("First date is Earlier");
        } else {
            printf("Second date is earlier");
        }
    } else {
        printf("First date is later");
    }
    return 0;
}