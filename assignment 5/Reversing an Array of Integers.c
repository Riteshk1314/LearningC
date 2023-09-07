//Reversing an Array of Integers
#include<stdio.h>
int main()
{
    int n,i,b;
    printf("Enter number of terms of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter term at index %d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(n-1)/2;i++)
    {
        b=a[i];
        a[i]=a[(n-1)-i];
        a[(n-1)-i]=b;
    }
    printf("**********************************************************************************\nReversed Array is:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%d\n",a[i]);
    }

}