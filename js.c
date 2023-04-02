#include<stdio.






. struct
{
    int roll;
    char name [12];
    float gpa;
}student;
int main()
{
     student a;
    scanf("%d,%s,%f",&a.roll,a.name ,a.gpa);
    printf("name = %s roll = %d gpa = %f",a.name,a.roll,a.gpa);
}
