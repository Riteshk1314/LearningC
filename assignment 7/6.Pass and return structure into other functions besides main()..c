#include<stdio.h>
#include<string.h>

struct student
{
        char name[20];
        int roll_number;
        float marks;
        
};

struct student change(struct student a)
{
    a.marks=100;
    strcpy(a.name,"PQR");
    a.roll_number=10;
    return a;
}

int main()
{
    struct student a={"ABC",1,32};
    struct student b=change(a);
    printf("------------Changed-----------------");
    printf("\n %s %d %f",b.name,b.roll_number,b.marks);
}