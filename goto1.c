#include<stdio.h>
int main ()
{
    int i ;
    i=10;
    print:
        printf("Easy ");
        i=i-3;
        {
            goto print;
        }
        printf("No Problems");
}
