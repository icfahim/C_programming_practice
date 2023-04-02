#include <stdio.h>
int main ()
{
    int a[5]={12,45,87,9,6},sum,avg;
    int i;

    for (i=0;i<6;i++)
    {
    sum+=a[i];
    }
    avg=sum/5;
    printf("%d\n%d",sum,avg);
    return 0;
}


