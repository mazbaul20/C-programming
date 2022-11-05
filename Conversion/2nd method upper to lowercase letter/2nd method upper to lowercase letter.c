#include<stdio.h>
int main()
{
    char upper, lower;
    printf("Enter your uppercase letter: ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Lowercase letter is: %c\n",lower);
    getch();
}
