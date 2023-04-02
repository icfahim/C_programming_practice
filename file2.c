#include <stdio.h>
int main()
{
    FILE *fp,*fq;
    fp=fopen("a1.txt","r");
    fq=fopen("a2.txt","w");
    int a,b,add;
    fscanf(fp, "%d%d",&a,&b);
    add=a+b;
    fprintf(fq, "the sum is %d\n",add);
    fclose(fp);
    fclose(fq);
    return 0;
}
