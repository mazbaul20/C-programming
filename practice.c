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
        printf("Pop of stack %d\n",val);
    }else{
        printf("Exception from pop! Empty stack\n");  
    }
    
    return -1;
}
int peak(){
    if(top>=0){
        return stack[top];
    }else{
        printf("Exception from peak! Empty stack\n");
    }
    return -1;
}
int main(){
    printf("Implementation stack in c\n");
    peak();
    push(10);
    push(20);
    push(30);
    pop();
    push(40);
    printf("Top of stack %d\n",peak());

    return 0;
}