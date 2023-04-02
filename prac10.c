#include <stdio.h>
int main ()
{
    int a=15,b=9, c=10, d=7, e=8,f;

    f=(++a)+(--c)-(b--)+(d++)-(e--);

    printf("%d %d %d %d %d %d",f,a,c,b,d,e);

    return 0;
}
