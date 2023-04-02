#include<stdio.h>
#define pi 3.1416
float area(int rad);
int main()
{
    int r;
    float a;
    scanf("%d",&r);
    a=area(r);
    printf("%f",a);
    return 0;
}
float area(int rad)
{
    return pi*rad*rad;
}
