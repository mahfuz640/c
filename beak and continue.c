#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<20;a++)
    {
        if(a%3==0)
            continue;
        printf("%d",a);

        if(a==10)
            break;
    }
    getch();
    return 0;
}
