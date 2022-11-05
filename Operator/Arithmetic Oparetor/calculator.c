#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter your two number: ");
    scanf("%d%d",&num1,&num2);

    result = num1+num2; //
    printf("Addition = %d\n",result);

    result = num1-num2;
    printf("Subtraction = %d\n",result);

    result = num1*num2;
    printf("Multiplication = %d\n",result);

    float div = (float)num1/num2;
    printf("Division = %f\n",div);

    result = num1%num2;
    printf("Remainder = %d\n",result);
    getch();
}
