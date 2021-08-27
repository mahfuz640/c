#include<stdio.h>
int main()
{
    int a,fact =1,n;
    printf("Enter Any Positive number:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        fact=fact*a;
    }
    printf("Factorial is :%d\n",fact);

getch ();
return 0;

}

