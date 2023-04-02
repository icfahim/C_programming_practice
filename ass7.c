#include <stdio.h>
int main ()
{
    int i;
    i=10;
    print:
        printf("%d ",i);
        i=i+10;
        if(i<30)
        {
            goto print;
        }
        return 0;
}
