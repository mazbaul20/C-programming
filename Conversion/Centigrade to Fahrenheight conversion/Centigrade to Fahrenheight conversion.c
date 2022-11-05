#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Centigrade: ");
    scanf("%f",&c);
    //c = (f-32)/1.8
    f = (1.8*c)+32;
    printf("Fahrenheight number is: %.2f\n",f);
    getch();
}
