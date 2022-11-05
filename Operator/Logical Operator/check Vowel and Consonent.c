#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);

    //if(ch=='a'||ch=='A'){
        //printf("Vowel");
    //}else if(ch=='e'){
        //printf("Vowel");
    //}else if(ch=='i'){
        //printf("Vowel");
    //}else if(ch=='o'){
        //printf("Vowel");
    //}else if(ch=='u'){
        //printf("Vowel");
    //}else{
        //printf("Constant");
    //} or
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Vowel");
    }else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }else{
        printf("Constant");
    }

    getch();
}

