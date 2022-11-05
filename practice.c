#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top < CAPACITY-1){
        top=top+1;
        stack[top] = x;
        printf("Successful added item %d\n",x);
    }else{
        printf("Exception! no spaces\n");
    }
}
int pop(){
    if(top >= 0){
        int val = stack[top];
        top-=1;
        printf("");
    }
    return -1;
}
int peak(){
    if(top>=0){
        return stack[top];
    }
    printf("Exception from peak! Empty stack\n");
    return -1;
}
int main(){
    printf("Implementation stack in c\n");
    peak();
    push(10);
    push(20);
    printf("Top of stack %d\n",peak());
    push(30);
    push(40);
    printf("Top of stack %d\n",peak());

    return 0;
}