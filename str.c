#include <stdio.h>
#include<string.h>
int main ()
{
    char a[50],b[30];
    gets(a);
    gets(b);
    int cat=strcat(a,b);
    puts(cat);
}
