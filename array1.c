#include <stdio.h>
int main ()
{
    char a[40];
    int i,count ;
    gets(a);
    count =0;
    for (i=0;a[i]!='\0';i++)
    {
        count++;}
    gets(a);
    printf("%d",count);
    return 0;
}
