#include<stdio.h>
#include<stdbool.h>
#define CAPACITY 5

int queue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull(){
    if(totalItem == CAPACITY){
        return true;
    }
    return false;
}
bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}
void enqueue(int item){
    if(isFull()){
        printf("Sorry, the Queue is full.\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    queue[rear] = item;
    totalItem++;
}

int dequeue(){
    if(isEmpty()){
        printf("Sorry, the Queue is empty.\n");
        return -1;
    }
    int frontItem = queue[front];
    queue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem--;
    return frontItem;
}

void printQueue(){
    int i;
    printf("Queue: ");
    for (i = 0; i < CAPACITY; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){
    printf("Implementation queue in c\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printQueue();
    enqueue(50);
    printQueue();
    enqueue(60);
    printf("Dequeue: %d\n", dequeue());
    printQueue();
    enqueue(60);
    printQueue();
    return 0;
}
