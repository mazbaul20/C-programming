#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter your base number: ");
    scanf("%f",&base);

    printf("Enter your height number: ");
    scanf("%f",&height);

    area = (float)1/2*base*height;//0.5 or (float)1/2
    printf("Area= %.3f",area);

    return 0;
}
