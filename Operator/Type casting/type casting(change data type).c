#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter your two numbers: ");
    scanf("%d%d",&num1,&num2);

    sum = num1+num2;
    printf("num1+num2 = %d\n",sum);

    avg = (float)sum/2;//type casting
    printf("The average is = %f\n",avg);
    getch();
}
