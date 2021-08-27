#include<stdio.h>
#include<conio.h>
int main()

{
    char lower,upper;
    printf("Enter any small letter:");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("This is your Capital letter:%c",upper);



    getch();
    return 0;
}
