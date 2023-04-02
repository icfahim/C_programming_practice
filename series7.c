//1^2 + 2^2 + 3^2 +... ...+n^2 addition
#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
    sum=sum+i*i;
    }
    printf("%d",sum);
}
