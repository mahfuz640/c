#include<stdio.h>

int main()
{
    float Base,Height,area;
    printf("Enter your Base:");
    scanf("%f",&Base);
    printf("Enter your Height:");
    scanf("%f",&Height);

    area=(float)1/2 * Base * Height;
    printf("Area is:%.2f",area);

    getch();
    return 0;


}
