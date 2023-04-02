#include<stdio.h>
int main ()
{
    int a,b,p;
    printf("The number a is \n");
        scanf("%d",&a);
        printf("the number b is \n");
        scanf("%d",&b);
        p=a;
        a=b;
        b=p;
        printf("the swap number a %d\n",a);
        printf("the swap number b %d\n",b);

        return 0;
}
