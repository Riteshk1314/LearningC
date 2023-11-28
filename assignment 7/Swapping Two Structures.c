#include<stdio.h>
#include<string.h>

struct student
{
        char name[20];
        int roll_number;
        float marks;
        
};

int main()
{
    struct student a={"ABC",1,42};
    struct student b={"XYZ",2,33};
    printf("Student a initially is %s %d %f",a.name,a.roll_number,a.marks);
    printf("\nStudent b initially is %s %d %f\n\n\n",b.name,b.roll_number,b.marks);
    struct student temp;
    temp=a;
    a=b;
    b=temp;
    printf("Student a now is %s %d %f",a.name,a.roll_number,a.marks);
    printf("\nStudent b now is %s %d %f",b.name,b.roll_number,b.marks);
}