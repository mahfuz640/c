#include<stdio.h>
#include<conio.h>

main()
{

    int i,k[10],sum=0;
    double Average=0;

    printf("Enter 10 number\n " );

    for(i=0;i<=9;i++)

    scanf("%d",&k[i]);

    printf("\n\n");

    for(i=0;i<=9;i++)
        printf("%d",k[i]);

    printf("\n\n");

    for(i=0;i<=9;i++)


    sum=sum = k[i];

    printf ("REsult of the summartion=%d\n\n",sum);

    Average= (float)sum/10;

    printf("Average = %.2f\n\n",Average);

    getch();

    return 0;
}
