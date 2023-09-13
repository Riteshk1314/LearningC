//Write a program to merge two arrays

#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the size of the two arrays:");
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    int c[n+m];
    //n is the size of array a, m is the size of array b, c array contains both elements of a and b so size should be a+b
    //inputing the arrays
    printf("\nEnter Elements of array 1:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter Elements of array 2:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    //Now a array should be copied as it is to array c starting from a[0] to a[n-1]
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    //Now till c[n-1], a array is copied, so we will start from c[n] till c[n+m] to copy b[0] till b[m]
    for(int i=n;i<n+m;i++)
    {
        c[i]=b[i-n];        //b[i-n] because it will start from 0 (n-n) till ((n+m)-1-n) i.e till m-1 
    }
    //Now printing the final array
    for(int i=0;i<(n+m);i++)
    {
        printf("%d\n",c[i]);
    }
}