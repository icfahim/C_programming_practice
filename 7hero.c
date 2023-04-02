#include<stdio.h>
void main ()
{
    int a=6,b=5;
    int resultone,resulttwo;
    resultone= (a>b) && (b>a);
    resulttwo= (a>b) || (b>a);
    printf("%d",resultone,resulttwo);
}
