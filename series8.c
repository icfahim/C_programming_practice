#include <stdio.h>
int main()
{
    double i,n,sum=0;
    scanf("%lf",&n);
    for (i=1;i<=n;i++)
        sum=sum+(1/i);
    printf("%lf",sum);
}
