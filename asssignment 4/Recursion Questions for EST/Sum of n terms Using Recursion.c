//Sum of n terms Using Recursion
//Eg if n=5 sum should be 1+2+3+4+5=15

#include<stdio.h>

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}

int main()
{
    int n=5;
    printf("Sum of %d terms is %d",n,sum(n));
}