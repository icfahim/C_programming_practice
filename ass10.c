#include <stdlib.h>
int main()
{
    int count=0;
    char *p;
    p=malloc(100);
    gets(p);
    do
    {
        p++;
        count++;
    }
    while (*p!='\0');
     printf("%d",count);
}
