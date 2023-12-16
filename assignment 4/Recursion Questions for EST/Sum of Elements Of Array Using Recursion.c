//Sum of elements of array Using Recursion

#include<stdio.h>

int sum_array(int a[10],int i)
{
    if(i==10)
    {
        return 0;
    }
    else
    {
        return a[i]+sum_array(a,i+1);
    }
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d",sum_array(a,0));
}