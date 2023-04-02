#include <stdlib.h>

int main()
{
    char *p;
    p = malloc(100);
    int count=0;
    gets(p);
    while (*p!='\0')
{
        p++;
        count++;
}
    printf("%d",count);
    return 0;
}
