#include<stdio.h>
int main()
{
    double A,pi=3.1417,r;
    printf("Enter radius number: ");
    scanf("%lf",&r);
    A = pi*r*r;
    printf("Circle area is = %.2lf\n",A);
    getch();
}
