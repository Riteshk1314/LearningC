//Write a program to find the median of an array

#include<stdio.h>
int main()
{
    int n;
    int a[]={10,20,30,40,50,60,70,80,90,100};
    float x;
    n=sizeof(a)/sizeof(int);
    if(n%2!=0)
    {
        x=a[(n)/2];
    }
    else
    {
        x=(a[(n-1)/2]+a[(n/2)])/2.0;
    }
    printf("Median is %f",x);
    
    
}