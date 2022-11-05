#include<stdio.h>
int main()
{
    float area, base,height;
    printf("Enter your base number: ");
    scanf("%f",&base);

    printf("Enter your height number: ");
    scanf("%f",&height);

    area = 0.5*base*height;
    printf("Tringle area is: %.2f\n",area);
    getch();
}
