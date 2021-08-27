#include<stdio.h>
#include<conio.h>

int main()

{
   int a,b,c,sum;
   float avr;

   printf("Enter two interger :");
   scanf("%d %d %d",&a,&b,&c);
   sum=a+b+c;
   printf("result is:%d\n",sum);


   avr=(float)sum/2; // this rule called is //type castiung
   printf("your avareg number is :%.2f",avr);


   getch();
   return 0;

}
