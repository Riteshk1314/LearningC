//Write a program to declare an array of 10 numbers and find the smallest numbers

#include<stdio.h>
int main()
{
    int a[10]={52,48,77,98,92,55,64,20,10,35};
    int small=a[0];
    for(int i=0;i<=9;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("Smallest Number is %d",small);
}