#include <stdio.h>
int main ()
{
    char a[30];
    gets(a);
    int i ;
    for (i=5; i>=0 ;i--)
    printf("%c",a[i]);
    return 0;
}

