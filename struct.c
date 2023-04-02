#include<stdio.h>

    struct record
    {
        char name [20];
        int gpa[10];
    };
    int main()
    {
        struct record a[15];
        int i;
        for (i=0;i<=4;i++)
        {
            printf("Enter Name: ");
            scanf("%s",&a[i].name);
            printf ("Enter gpa: ");
            scanf ("%d",&a[i].gpa);
        }
        for (i=0;i<=4;i++)
            printf("Name:%s gpa:%d\n",a[i].name,a[i].gpa);
    }

