#include<stdio.h>
int main()
{
    int chs;
    float tmp,con;
    printf("Tempature convart menu :\n");
    printf("Choice your convert num :1-F to C:\n");
    printf("Choice your convert num :2-C to F:\n");
    printf ("Enter your choice num:");
    scanf("%d",&chs);
    switch(chs)

{
case 1:
    {


        printf("Enter the F temp:");
        scanf("%f",&tmp);
        con=(tmp-32)/1.8;
        printf("F to C:%f\n",con);
break;
    }
case 2:

    printf("Enter the C temp:");
        scanf("%f",&tmp);
        con=(1.8*tmp)+32;
        printf("C to F:%f\n",con);

        default:
        printf("Erorr");
    }
return 0;
}
