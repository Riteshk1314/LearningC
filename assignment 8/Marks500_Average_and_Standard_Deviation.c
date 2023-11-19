// Read marks500.txt to find min and max of the marks. This file can be found at on the
// lab assignment page: https://sites.google.com/a/thapar.edu/uta-007/ues103/lab-
// assignments?authuser=0

#include<stdio.h>
#include<math.h>

int main()
{
    FILE *fp;
    fp=fopen("marks500.txt","rb");
    float marks;
    int roll;
    float total;
    float dev;
    while(1)
    {
        fscanf(fp,"%d",&roll);
        fscanf(fp,"%f",&marks);
        if(roll==-9999)
        {
            break;
        }
        
        else 
        {
            total=total+marks;
        }


    }
    float avg=total/500.0;
    printf("Average is %f",avg);

    total=0.0;        //Will be used for calculating standard deviation
    fclose(fp);

    fp=fopen("marks500.txt","rb");
    while(1)
    {
        fscanf(fp,"%d",&roll);
        fscanf(fp,"%f",&marks);
        if(roll==-9999)
        {
            break;
        }
        
        else 
        {
            //Subtract the mean from each score's deviation
            marks=marks-avg;    //this is deviation now stored in marks only
            //Square the deviation
            marks=marks*marks;
            //Add up the squared deviations in total
            total=total+marks;

        }
        

    }
    dev=sqrt(total/500.0);

    printf("\nStandard Deviation is %f",dev);

}