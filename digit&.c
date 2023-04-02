#include <stdio.h>
void main ()
{
    char ch;
    scanf("%c",&ch);
    if (ch>'0'&&ch<='9')
    {
        printf("digit\n",ch);
    }
    else
    {
        printf("not a digit\n",ch);
    }

}
