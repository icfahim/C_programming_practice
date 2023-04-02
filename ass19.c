#include <stdio.h>
int main ()
{
    int i=10;
    print:
        printf("Easy ");
        i=i-3;
        if (i>0)
        {
            goto print;
        }
        printf("No Problems");
        return 0;
}
