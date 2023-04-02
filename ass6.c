#include <stdio.h>
int main()
{
    int i,sum=0;
    {
        i=1;
        do
        { sum=sum+i;
        i++;}
        while(i<4);
        printf("%d",sum);
    }return 0;
}
