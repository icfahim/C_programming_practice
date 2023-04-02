#include <stdio.h>
#define Pi 3.1416
int main ()
{
    int r;
    float a;
    printf("write the radius of a circle\n");
    scanf("%d",&r);
    a=Pi*r*r;
    printf("the area of a circle is\n.2f",a);
    return 0;
}
