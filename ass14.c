#include<stdio.h>
int main ()
{
    int n,count =0;
    scanf("%d",&n);
    print:
         n=n/10;
        count++;
        if (n>0)
        goto print;
        printf("%d",count);
}
