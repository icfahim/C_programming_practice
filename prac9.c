#include <stdio.h>
int main ()
{
    int a=11, b=8, c=5, d=6, e;
    e = (a--) - (--b) + (++c) + (d++);
    printf("%d %d %d %d %d",a,b,c,d,e);
    return 0;
}
