#include<stdio.h>
int main()
{
    int num,count=0,a;
    printf("Enter any positive number:");
    scanf("%d",&num);
    for(a=2;a<num;a++)
    {
        if(num%a==0)
        {
            count++;
            break;
        }
    }
        if(count==0)
            printf("prime number\n");
        else
            printf("Not prime number\n");

            getch();
            return 0;

}
