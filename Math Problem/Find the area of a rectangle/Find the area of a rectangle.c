#include<stdio.h>
int main()
{
    float length,width,area;
    printf("Enter your length: ");
    scanf("%f",&length);

    printf("Enter your width: ");
    scanf("%f",&width);

    area = length*width;
    printf("Rectangle Area is = %.2f",area);
    getch();

}
