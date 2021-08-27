#include<stdio.h>
int main()
{
    double num1,num2;
    char b;
    printf("Enter an Operator(+,-,*,/):");
    scanf("%c",&b);
        printf("Enter two number:");
    scanf("%lf%lf",&num1,&num2);


    switch(b)

    {


    case'+':
    {
        printf("%lf + %lf=%lf\n",num1,num2,num1+num2);
        break;
    }




    case'-':
    {
        printf("%lf - %lf=%lf\n",num1,num2,num1-num2);
        break;
    }




    case'*':
    {
        printf("%lf * %lf=%lf\n",num1,num2,num1*num2);
        break;

    }


    case'/':
    {
        printf("%lf / %lf=%lf\n",num1,num2,num1/num2);
        break;
    }
    default:
        printf("Erorr");

    }

    return 0;


}
