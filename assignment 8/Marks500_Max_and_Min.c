// Read marks500.txt to find min and max of the marks. This file can be found at on the
// lab assignment page: https://sites.google.com/a/thapar.edu/uta-007/ues103/lab-
// assignments?authuser=0

#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("marks500.txt","rb");
    float marks;
    int roll;
    float max=-1;
    float min=101;

    while(1)
    {
        fscanf(fp,"%d",&roll);
        if(roll==-9999)
        {
            break;
        }
        fscanf(fp,"%f",&marks);
        if(marks>max)
        {
            max=marks;
        }
        else if(marks<min)
        {
            min=marks;
        }
        

    }
    printf("Maximum Marks are %.2f\nMinimum Marks are %.2f",max,min);
        
}   