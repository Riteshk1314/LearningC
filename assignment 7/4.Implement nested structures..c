#include<stdio.h>
#include<string.h>

struct student
{
        char name[20];
        int roll_number;
        float marks;
        
};
struct class
{
    struct student S[3];
    
};
int main()
{
    struct class C={"XYZ",1,100,"ABC",2,23,"PQR",3,44};
    for(int i=0;i<3;i++)
    printf("%s %d %f\n",C.S[i].name,C.S[i].roll_number,C.S[i].marks);
}