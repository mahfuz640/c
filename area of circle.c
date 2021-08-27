#include<stdio.h>
int main ()
{
    float r,area;                  //pi=3.1416 chaile bole deya jai
    printf("Enter Redius:");       //include<math.h>  M.pi
    scanf("%f",&r);

    area=3.1416*r*r;

    printf("circle of area:%.3f",area);

    getch();
    return 0;

}
