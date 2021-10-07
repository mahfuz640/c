#include<stdio.h>
#include<math.h>
int main()
{
    long long a=100000;//karon int ar shimana -2^63 theke 2^31-1 porjonto
    long long b=100000; //long long ar shimana -2^63theke 2^63-1 pojonto

    long long c;
    c=a*b;
    printf("result is :%lld",c);//long long ar jonno amra %lld  use kori
    return 0;
}
