#include<stdio.h>
int main()
{
    float lenght,width,area;

    printf("Enter the legnth:");
    scanf("%f",&lenght);
    printf("Enter the width:");
    scanf("%f",&width);

    area=lenght*width;
    printf("Area of Rectangle:%.2f",area);

    getch();
    return 0;
}
