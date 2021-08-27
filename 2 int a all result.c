#include<stdio.h>
#include<conio.h>

int main()

{
   int a,b,result;
   float resul ;

   printf("Enter two interger :");
   scanf("%d %d",&a,&b);

   result=a+b;
   printf("result is:%d\n",result);

   result=a-b;
   printf(" sub is:%d\n",result);

   result=a*b;
   printf("Mul is:%d\n",result);

   resul=(float)a/b;
   printf("Div is:%.3f\n",resul);

   result=a%b;
   printf("reminder is:%d\n",result);

   getch();

   return 0;

}

