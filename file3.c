#include <stdio.h>
#define pi 3.1416
int main ()
{
    FILE *fp,*fq;
    fp=fopen("a3.txt","r");
    fq=fopen("a4.txt","w");
    int r;
    float a;
    fscanf(fp, "%d",&r);
    a=pi*r*r;
    fprintf(fq, "%.2f",a);
    fclose(fp);
    fclose(fq);
    return 0;
}
