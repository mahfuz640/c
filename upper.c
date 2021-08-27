#include<stdio.h>
#include<conio.h>
int main()
{
  char upper,lower;
  printf("Enter a capital letter:");
  scanf("%c",&upper);
  lower = tolower(upper);
  printf("This is the small letter:%c",lower);

  getch ();
  return 0;

}
