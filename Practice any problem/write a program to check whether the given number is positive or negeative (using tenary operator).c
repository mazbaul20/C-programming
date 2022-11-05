#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);

    large = (num1>num2)?num1:num2;

    printf("%d is large number ",large);

    return 0;
}
