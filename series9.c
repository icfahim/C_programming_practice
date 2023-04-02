#include <stdio.h>
int main()
{
    int i,n,product=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        product=product*i*i;

    printf("%d",product);
}
