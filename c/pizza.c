#include<stdio.h>
#include<stdbool.h>
#include<conio.h>
int main()
{
    int pizzarDam;
    bool dokanKhola=true;

    printf("Enter the price of pizza:");
    scanf("%d",&pizzarDam);

    if (pizzarDam <= 400 && dokanKhola==true)
    {
        printf("Ami pizza Khabo");
    }
    else {
        printf("Ami biriani khabo ");
    }
    gtch();
    return 0;}

