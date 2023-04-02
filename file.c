#include <stdio.h>
int main ()
{
    FILE *fp;
    fp=fopen("file.txt","r");
    char a[80];
    fgets(a, 80, fp);
    gets(a);
}
