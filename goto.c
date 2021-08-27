#include<stdio.h>
int main()
{
    int a=1;

    rabbi:
        printf("%d\n",a);
        a++;
        if(a<=50)
         goto rabbi;//label calling

return 0;
}


