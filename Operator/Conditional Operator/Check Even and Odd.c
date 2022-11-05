#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
