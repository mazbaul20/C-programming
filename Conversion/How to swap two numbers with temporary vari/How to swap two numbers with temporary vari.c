#include<stdio.h>
int main()
{
    int num1 = 20;
    int num2 = 10;

    int temp;
    temp = num1; //temp = 20
    num1 = num2; //num1 = 10
    num2 = temp; //num2 = 20

    printf("Num1 = %d\n",num1);//20
    printf("Num2 = %d\n",num2);//10
    getch();
}
