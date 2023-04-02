#include <stdio.h>
int main ()
{
    int n1,n2,sum=0,i,j;

    scanf("%d%d",&n1,&n2);

    for(i=1,j=2;  i<=n1,j<=n2;  i++,j++)

            sum=sum+i*j;

    printf("%d",sum);
}
