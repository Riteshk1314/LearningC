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
    struct student a={"Ajay",23,50.0};
    struct student b=a; //Address of a is being copied to b
    printf("%s %d %f\n",b.name,b.roll_number,b.marks);
    
    struct student c;
    strcpy(c.name,a.name);
    printf("Name of c is %s\n",c.name);
    
    c.marks=b.marks;
    printf("Marks of c are %f",c.marks);
}