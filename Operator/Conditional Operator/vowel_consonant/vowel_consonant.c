#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("%c is Vowel",ch);
    }else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("%c is Vowel",ch);
    }else{
        printf("Consonant");
    }
    getch();
}
