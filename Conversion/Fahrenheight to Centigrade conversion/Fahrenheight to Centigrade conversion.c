#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter your Fahrenheight: ");
    scanf("%f",&f);

    c = (f-32)/1.8;
    printf("Fahrenheit number is: %.2f",c);
    getch();
}
