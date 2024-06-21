#include <stdio.h>
#include<stdlib.h>

struct Book{
    char title[100];
    char author[100];
    int price;
    struct Book* link;
};

typedef struct Book book;

int main()
{
    struct Book *head, *current;
    current = (book*) malloc(sizeof(book));
    head = current;

    int n;

    printf("How many Books do you have?\n");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        fflush(stdin);
        printf("Enter book name:\n");
        gets(current->title);
        fflush(stdin);

        printf("Enter author:\n");
        gets(current->author);
        fflush(stdin);

        printf("Enter price:\n");
        scanf("%d",&current->price);
        
        current->link = (book*) malloc(sizeof(book));
        current = current->link;
    }

    printf("\n");
    int sum=0;
    for(int i = 0; i < n; i++){
        printf("Name = %s\nAuthor = %s\nPrice = %d\n\n\n",head->title, head->author, head->price);
        head = head -> link;
        sum +=head -> price;
        head = head -> link;
    }

    printf("Total Price %d\n",sum);

    return 0;
}
