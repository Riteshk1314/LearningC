// make a text file with marks name and roll no of student .
// Use this file so that your program aks for roll no from user.u search this file and write a report card for the roll no in another text file

#include<stdio.h>
#include<string.h>
int main()
{
    int roll_number;
    float marks;
    char name[50];
    FILE *fp;
    fp=fopen("result.txt","r");
    int roll;
    printf("Enter the Roll Number of the student:");
    scanf("%d",&roll);
    while(1)
    {
        fscanf(fp,"%f",&marks);
        
        fscanf(fp,"%s",&name);
        
        fscanf(fp,"%d",&roll_number);
        if(roll_number==roll)
        {
            printf("--------------Report Card------------\n");
            printf("Name: %s",name);
            printf("\nRoll Number: %d",roll);
            printf("\nMarks: %f",marks);
            break;
        }
        
    }
    fclose(fp);

}