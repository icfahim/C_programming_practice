#include <stdio.h>
struct student
{
    char name[10];
    char age[10];
    char roll[10];
    char marks[10];
    char address[50];
};
int main ()
{
    struct student a[50];
    int i;
    for (i=0;i<=14;i++)
    {
        printf("Enter name : ");
        scanf("%s",a[i].name);
        printf("Enter age : ");
        scanf("%s",a[i].age);
        printf("Enter roll : ");
        scanf("%s",a[i].roll);
        printf("Enter marks : ");
        scanf("%s",a[i].marks);
        printf("Enter address : ");
        scanf("%s",a[i].address);
    }
      for (i=0;i<=14;i++)
      {
          printf("Name:%s Age:%s Roll:%s Marks:%s Address:%s\n",a[i].name,a[i].age,a[i].roll,a[i].marks,a[i].address);
      }
      return 0;
}
