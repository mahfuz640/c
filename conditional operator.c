#include<stdio.h>
int main()
{
    int num1,num2,Large;
    printf("give Two number:");
    scanf("%d %d",&num1,&num2);
    Large=(num1>num2)? num1:num2;
    printf("Large Number is :%d",Large);

    getch();
    return 0;
}
