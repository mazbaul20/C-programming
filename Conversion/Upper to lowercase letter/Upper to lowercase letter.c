#include<stdio.h>
int main()
{
    char upper;
    printf("Enter your uppercase letter: ");
    scanf("%c",&upper);//A=65
    printf("Lowercase letter is: %c\n",upper+32);//a=97
    getch();
}
