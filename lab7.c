#include <stdio.h>
int main ()
{
    FILE *fp;
    char ch;
    fp=fopen("Day 71st.txt","w");
    while (ch=getchar()) != EOF)
    putc(ch,fp);
    fclose(fp);

    fp=fopen("Day 71st.txt","r");
    while (ch=getc(fp)) != )
    putchar(ch);
    fclose(fp);
}
