#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter centrigrade:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("ferhenite is:%.2f",f);
    getch();
    return 0;

}
