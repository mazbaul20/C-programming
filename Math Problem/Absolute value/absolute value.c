#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int result = abs(num);
    printf("Result = %d\n",result);
    getch();
}
