#include<stdio.h>
int main()
{
    double a,b,c,TS;
    char name[100];
    scanf("%s",name);
    scanf("%lf",&a);
    scanf("%lf",&b);
    c=(b*15)/100;
    TS=a+c;
    printf("TOTAL = R$%.2lf\n",TS);
    return 0;

}
