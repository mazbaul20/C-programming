#include<stdio.h>
int main()
{
    int x,y;
    double result;
    printf("Enter base value: ");
    scanf("%d",&x);//base value

    printf("Enter power value: ");
    scanf("%d",&y);//power er value

    result = pow(x,y);
    printf("Result = %.2lf\n",result);
    getch();
}
