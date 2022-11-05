#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter your radius number: ");
    scanf("%f",&radius);

    area = 3.1416*radius*radius;
    printf("Circle Area = %.2f",area);
    getch();
}
