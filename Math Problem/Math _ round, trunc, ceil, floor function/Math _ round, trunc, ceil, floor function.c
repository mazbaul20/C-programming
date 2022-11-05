#include<stdio.h>
int main()
{
    double x=-4.10,result;
    //result = round(x);//round er kaj holo .50 er upore gele 1.0 add hobe.

    //result = trunc(x);//trunc er kaj holo 4.99 holeo se 4 return korbe

    result = ceil(x);//ceil er kaj holo 4.10 holeo se 5 return korbe

    //result = floor(x);//floor er kaj holo nicher dike jaoa 4.10=4, -4.11=-5.

    printf("ceil(%.2lf) = %.2lf\n",x,result);
    getch();
}
