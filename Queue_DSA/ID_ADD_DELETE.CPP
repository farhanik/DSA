#include<stdio.h>
#include<stdlib.h>


#define MAX_SIZE 5

int queue[MAX_SIZE];

int front = 0;
int rear =  -1;
int size = 0;

int isEmpty() {
    return size == 0;
}

int isFull(){
    return size == MAX_SIZE ;
}

void enqueue(int data){
    if(isFull()){
        printf("Queue is full\n");
       
    } else {
        
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = data;
        size++;
    }
}

int dequeue(){
    if(!isEmpty()){
        int data = queue[front];
        front = (front + 1 ) % MAX_SIZE;
        size--;
        return data;
    }
}

void display(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        return ;
    }
    int i = front;
    for(int j = 0; j < size; j++){
        printf("%d", queue[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

int main(){

    enqueue(0);
    enqueue(1);
    enqueue(7);
    enqueue(7);
    enqueue(9);
    display();
    printf("\n");
    dequeue();
    dequeue();
    dequeue();

    
    display();
    return 0;
}