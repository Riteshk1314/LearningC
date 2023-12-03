//Create a nested structure to model a university course. The course structure should include 
//variables for the course code, title,credits and instructor details. The instructor 
//structure should have variables for the name, department, and contact information.
//Print Details for a specific course

#include<stdio.h>
#include<string.h>

struct instructor
{
    char name[50];
    char dept[50];
    char contact[10];
};
struct course
{
    int code;
    char title[50];
    float credits;
    struct instructor hsp;
    
};

int main()
{
    struct course cse;
    cse.code=103;
    strcpy(cse.title,"CSE");
    cse.credits=4.0;
    
    strcpy(cse.hsp.name,"ABCD");
    strcpy(cse.hsp.dept,"CSE");
    strcpy(cse.hsp.contact,"1234567890");
    
    printf("---------------Details of Course-------------------\n");
    printf("Couse Code -> %d",cse.code);
    printf("\nCourse Title -> %s",cse.title);
    printf("\nCouse Credits -> %f",cse.credits);
    printf("\nCouse Instructor -> %s",cse.hsp.name);
    printf("\nCourse Instructor Department -> %s",cse.hsp.dept);
    printf("\nCOurse Instructor Contact -> %s",cse.hsp.contact);
    
    
    
    
}