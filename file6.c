#include <stdio.h>
int main ()
{
    FILE  *fp;
    char ch ;
    fp=fopen ("day71.txt","w");
    while((ch=getchar())!=EOF)
    putc(ch,fp);
    fclose(fp);
    fp=fopen("day71.txt","r");
    while ((ch =getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
}
