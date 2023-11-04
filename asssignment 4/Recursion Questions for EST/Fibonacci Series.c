//Fibonacci Series Using Recursion

#include<stdio.h>

int Fibonacci(int n)
{
    if(n==1)
    {
        return 0;
        
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}


int main()
{
    int n;
    printf("Enter Number of terms of Fibonacci Series:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",Fibonacci(i));
    }
}