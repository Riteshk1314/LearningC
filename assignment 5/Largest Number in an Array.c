//Write a program to declare an array of 10 numbers and find the largest number
#include<stdio.h>
int main()
{
    int a[10]={5,7,81,42,54,98,52,10,3,20};
    int large=a[0];
    for(int i=1;i<=9;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("Largest Number is %d",large);
}