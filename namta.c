#include<stdio.h>
int main()
{
    while(1) //While is meaning abar korar jonno bar bar jeno kate ante
                //hoi
    {
        int num,a;
        printf("Enter Any Number :");
        scanf("%d",&num);
        for(a=1; a<=10; a++)
        {
            printf("%d X %d=%d\n",num,a,num*a);
        }
    }
    getch();
    return 0;
}
