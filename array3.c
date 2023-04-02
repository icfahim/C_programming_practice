#include <stdio.h>
#include <string.h>
int main ()
{
    char name[3][10];
    gets (name);
    int i;
    for (i=0;i<3;i++)
    {
        puts(name[i]);
    }
    return 0;
}

