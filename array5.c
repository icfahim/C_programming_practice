#include <stdio.h>
#include <string.h>
int main ()
{
    char a[5],b[3];
    gets(a);
gets(b);
    int cat=strcat(a,b);
    printf("%s%s %d %d",b,a,strlen(b),strlen(a));
    return 0;
}

