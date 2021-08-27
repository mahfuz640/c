/*this is a test*/
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Math:");
    scanf("%d",&a);

    printf("English:");
    scanf("%d",&b);

    printf("Bangla:");
    scanf("%d",&c);

    sum=a+b+c;

    printf("Result is:%d\n",sum);

    if(sum>=80)
        printf("A+");
    else if(sum>=50)
    printf("A-");

    else if(sum<=32)
        printf("fail");
    }
