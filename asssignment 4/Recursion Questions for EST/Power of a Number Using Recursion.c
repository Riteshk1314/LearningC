//Power of number using recursion 
// power(m,n) means m^n if m=5, n=3 ans is 125 

#include <stdio.h>

int power(int m, int n)
{
    if(n==1)
    {
        return m;
    }
    else
    {
        return m*power(m,n-1);
    }
}

int main()
{
    printf("%d",power(5,3));

    return 0;
}
