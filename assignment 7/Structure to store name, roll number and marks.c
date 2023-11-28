#include<stdio.h>

struct student
{
    char name[20];
    int roll_number;
    float marks;
};

int main()
{
    struct student s[3];
    int i;
    printf("Enter the name, roll number and marks of 3 students\n");
    for(i=0;i<3;i++)
    {
        scanf("%s %d %f",s[i].name,&s[i].roll_number,&s[i].marks);
    }
    printf("Details you have entered are:\n");
    for(i=0;i<3;i++)
    {
        printf("%s %d %f\n",s[i].name,s[i].roll_number,s[i].marks);
    }
    
}