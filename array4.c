#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50];
    gets(a);
    int len =strlen(a);
    printf("%d",len);
    return 0;
}
