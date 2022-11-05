#include<stdio.h>
int main()
{
    char lower; //convert lower to upper case letter
    printf("Enter your lower case letter: ");
    scanf("%c",&lower); //a=97
    //lower = lower-32, a=97-65=32
    printf("Uppercase Letter is: %c\n",lower-32);//A=65
    getch();

}
