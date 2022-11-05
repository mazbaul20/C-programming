#include<stdio.h>
int main()
{
    int a=6,d=6,s=6,m=6;

    a+=2; //a=a+2 a=6
    printf("Addition = %d\n",a);

    s-=2; //a=a-2 a=6
    printf("Subtraction = %d\n",s);

    m*=2; //a=a*2 a=6
    printf("Multiplication = %d\n",m);

    d/=2; //a=6/2 a=6
    printf("Division = %d\n",d);
    getch();
}
