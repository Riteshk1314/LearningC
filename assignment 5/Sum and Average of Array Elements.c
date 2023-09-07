//Sum and Average of array elements

#include<stdio.h>
int main()
{
    int a[]={1,22,24,25,26};
    int i,size;
    float sum=0.0,avg;
    size=sizeof(a)/sizeof(int);
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of Elements of Array is %.0f\n",sum);
    avg=sum/size;
    printf("Average of Elements of Array is %f",avg);
    
}