#include<stdio.h>
struct record
{
    char name[10] ;
    char age[15];
    char marks[10];
    char roll[14];
};
int main ()
{
    struct record a;

      printf("Enter name: ");
       scanf("%s",a.name);
         printf("Enter age: ");
       scanf("%s",a.age);
         printf("Enter marks: ");
       scanf("%s",a.marks);
         printf("Enter roll: ");
       scanf("%s",a.roll);
       printf("Name :%s Age:%s Marks:%s roll:%s",a.name,a.age,a.marks,a.roll);
       return 0;
}
