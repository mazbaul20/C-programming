#include<stdio.h>
int main()
{
    double a,b,c,area,s;
    printf("Enter your three values: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    s=(a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Tringle = %.2lf",area);
    getch();
}
