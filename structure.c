#include <stdio.h>
struct record{
    char name[10];
    char phone [15];
    char email[15];
};
int main ()
{
    struct record a;
    printf("Enter name: ");
    scanf("%s",&a.name);
     printf("Enter phone: ");
     scanf("%s",&a.phone);
     printf("Enter email: ");
    scanf("%s",&a.email);

    printf("Name:%s phone:%s email:%s",a.name,a.phone,a.email);
    return 0;}

