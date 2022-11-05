#include<stdio.h>
#include<math.h>
int main()
{
    double result, x=0.35;

    //result = log(x);
    //result = log10(x); //x=10.5;
    //result = exp(x);  //x=1;
    result = sin(x);  //x=0.35;

    printf("sin(%.2lf) = %.2lf\n",x,result);
    getch();
}
