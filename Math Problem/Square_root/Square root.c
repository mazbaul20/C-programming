#include<stdio.h>
int main(){
    double num,result;
    printf("Any root number: ");
    scanf("%lf",&num);
    result = sqrt(num);
    printf("Result = %lf\n",result);
    getch();
}
