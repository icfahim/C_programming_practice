//farenheit to celcius
#include <stdio.h>
float temp(float ,float );

int main ()

{
    float c,f;

    printf("Enter the value of Farenheit\n");

    scanf("%f",&f);

    c=((f-32)/9*5);

    printf("The value of Celcius %f\n",c);

    return 0;
}
float temp(float c,float f)
{
    return (c);
}
