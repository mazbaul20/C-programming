#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter your lowercase letter: ");
    scanf("%c",&lower);
    upper  = toupper(lower);
    printf("Uppercase letter is: %c\n",upper);
    getch();

}
