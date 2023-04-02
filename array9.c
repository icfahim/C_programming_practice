#include<stdio.h>
int main()
{
    int i,n, max;
    int a[n];
    scanf("%d",&n);

    for (i=0;i<=n;i++)
           scanf("%d",&a[i]);


    for (i=0;i<=n;i++)
     max=a[0];
        {
        if (a[0]>max)
            max=a[i];
    }
    printf("%d",max);
}
