#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter here three values:");
    scanf("%lf%lf%lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is:%.2lf",area);

    getch ();
    return 0;
}
