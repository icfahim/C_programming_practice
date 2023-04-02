//farenheit to celcius
#include <stdio.h>

void main ()
{
    float C;

    float F;

    printf("Entet your farenheit\n");

    scanf("%f",&F);

    C=((F-32)/9)*5;

    printf("the value of celcius %f\n",C);
}
