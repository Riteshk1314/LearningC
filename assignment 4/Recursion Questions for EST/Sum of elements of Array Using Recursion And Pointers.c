#include<stdio.h>
//Sum of elements of array using recursion and pointers

int sum(int a[],int *p)
{
    if(p==a)
    {
        return a[0];
    }
    else 
    {
        return *p+sum(a,p-1);
    }
}

int main()
{
    int a[5]={10,20,30,40,50};
    int *p;
    int i=sizeof(a)/sizeof(int)-1;
    p=a+i;
    printf("%d",sum(a,p));
}