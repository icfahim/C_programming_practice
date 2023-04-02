#include <stdio.h>
#include <math.h>
int main ()
{
    FILE *fp,*fq;

    fp=fopen("tri.txt","r");

    fq=fopen("tri1.txt","w");

    int a;
    float area;

    fscanf(fp,"%d",&a);

    area=(sqrt(3)/4)pow(a);

    fprintf(fq,"%f",area);

    fclose(fp);

    fclose(fq);

    return 0;
}

