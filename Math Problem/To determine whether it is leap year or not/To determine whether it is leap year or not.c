#include<stdio.h>
int main()
{
    int year;
    printf("Enter your year: ");
    scanf("%d",&year);

    if(year%400==0){
        printf("%d is Leap year!",year);
    }else if(year%4==0 && year%100!=0){
        printf("%d is Leap year!",year);
    }else{
        printf("%d is no Leap year!",year);
    }
    return 0;
}
