// Read marks500.txt to find min and max of the marks. This file can be found at on the
// lab assignment page: https://sites.google.com/a/thapar.edu/uta-007/ues103/lab-
// assignments?authuser=0

#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("marks500.txt","rb");
    float marks;
    int topper;
    int roll;
    float max_marks=-1;
    printf("Failures are:\n");
    while(1)
    {
        fscanf(fp,"%d",&roll);
        if(roll==-9999)
        {
            break;
        }
        fscanf(fp,"%f",&marks);
        if(marks>max_marks)
        {
            max_marks=marks;
            topper=roll;
        }
        if(marks<33)
        {
            printf("%d\n",roll);
        }
    }

    printf("Topper is %d",topper);
    fclose(fp);


}