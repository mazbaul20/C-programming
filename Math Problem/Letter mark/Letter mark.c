#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark: ");
    scanf("%d",&mark);

    if(mark<=0 || mark>100){
        printf("Invalid mark");
    }else if(mark>=80 && mark<=100){
        printf("A+");
    }else if(mark>=70 && mark<=79){
        printf("A");
    }else if(mark>=60 && mark<=69){
        printf("A-");
    }else if(mark>=50 && mark<=59){
        printf("B");
    }else if(mark>=40 && mark<=49){
        printf("C");
    }else if(mark>=33 && mark<=39){
        printf("D");
    }else{
        printf("F");
    }
    getch();
}
