#include<stdio.h>
int main()
{
    FILE *fp,*fq;
    fp=fopen("a5.txt","r");
    fq=fopen("a6.txt","w");

    int c;
    float f;

    fscanf(fp,"%d",&c);

    f=(9*c+160)/5;

    fprintf(fq, "%f",f);

    fclose(fp);

    fclose(fq);

    return 0;
}
