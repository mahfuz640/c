#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your Base number:");
    scanf("%d",&x);

     printf("Enter your power number:");
    scanf("%d",&y);

    double result=pow(x,y);
    printf("Result is:%.2lf",result);

}
