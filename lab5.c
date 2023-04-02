#include <stdio.h>
float farenheit (int celcious)
{
    int c;
    float f;
    scanf("%d",&c);
    f=(9*c+160)/5);
    printf("%f",f);
}
float farenheit (int cel)
{
    return (9*cel+160)/5);
}

