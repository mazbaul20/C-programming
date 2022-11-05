#include<stdio.h>
int a=30;//global variable
int main()
{
    int b=10;//local variable
    printf("Inside the main function B = %d\n",b);
    display();
    getch();
}
void display()
{
    printf("Inside the display function A = %d\n",a);
}

