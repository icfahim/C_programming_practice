#include <stdio.h>
struct record
{
    char name[12];
    int roll;
    int marks;
};
int main ()
{
    struct record a[15];
    int i;
    for (i=0;i<=5;i++)
    {
        printf("Enter name : ");
        scanf("%s",&a[i].name);
         printf("Enter roll : ");
        scanf("%d",&a[i].roll);
         printf("Enter marks : ");
        scanf("%d",&a[i].marks);

    }
    for (i=0;i<=5;i++)
    {
        printf("Name : %s roll :%d marks :%d\n",a[i].name,a[i].roll,a[i].marks);
    }
    return 0;
}
