#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("Large number is: %d\n",num1);
    }else if(num1<num2){
        printf("Large number is: %d\n",num2);
    }else{
        printf("Equal\n");
    }

    getch();
}


