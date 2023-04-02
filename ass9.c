#include <stdlib.h>
int main ()
{
    int count=0;
    char *p;
    p=malloc(100);
    gets(p);
    for (;*p!='\0';)
    {
        p++;
        count++;
    }
    puts(count);
}

