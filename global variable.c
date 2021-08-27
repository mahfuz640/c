#include<stdio.h>
int a=10;
int main()
{
    printf("This is a Global Variable:%d\n",a);
    display();
}
 void display()
{
 printf("global variable is a:%d\n",a);
}
