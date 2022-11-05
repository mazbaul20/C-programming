#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your letter: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("%c is Capital letter",ch);
    }else if(ch>='a'&&ch<='z'){
        printf("%c is Small letter",ch);
    }else{
        printf("%c is not a letter",ch);
    }


    getch();
}

