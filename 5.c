#include<stdio.h>
#include<conio.h>

int main()
{

    int x,*y;
    //clrscr();

    x=7;
    y=&x;

    printf("value of x=%d\n",x);
    printf("value of x=%d\n",y);

    x=10;

    printf("New value of variable x=%d\n",x);
    printf("New value of variable *y=%d\n\n",*y);

    *y=100;

    printf("New value of variable x=%d\n",x);
    printf("New value of variable *y=%d\n",*y);

    printf("\n\n----------------\n\n");

    printf("Memory location of x=%u\n",&x);
    printf("Memory location of x=%u\n\n",y);

    printf("Memory location of x=%p\n",&x);
    printf("memory location of x=%p\n\n",y);

    printf("Memory location of x=%x\n",&x);
    printf ("Memory location of x=%x\n\n",y);

    getch ();
    return 0;
}
