#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,result;
    printf("Enter a float number :");
    scanf("%f",&a);

    printf("Enter a float number :");
    scanf("%f",&b);

    result=a+b;

    printf("Result is:%.2f",result);

    getch();
    return 0;

}
