//Sum of digits of a number using Recursion

#include<stdio.h>

int sum_digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int digit=n%10;
        return digit+sum_digits(n/10);
    }
}

int main()
{
    int n=1234;
    printf("Sum of digits of %d is %d",n,sum_digits(1234));
}