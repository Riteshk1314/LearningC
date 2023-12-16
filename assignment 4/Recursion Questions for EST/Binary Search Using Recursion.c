//Binary Search Program Using Recursion

#include<stdio.h>

void binary_search(int a[], int n, int low, int high)
{
    int mid=(low+high)/2;
    if(low>high)
    {
        printf("Number Not Found");
    }
    else if(a[mid]==n)
    {
        printf("Number Found");
    }
    else 
    {
        if(n>a[mid])
        {
            low=mid+1;
            
        }
        else if(n<a[mid])
        {
            high=mid-1;
        }
        binary_search(a,n,low,high);
    }
    
}

int main()
{
    int a[10]={1,8,14,31,42,56,66,72,88,100};
    int low=0;
    int high=sizeof(a)/sizeof(int)-1;
    int n;
    printf("Enter Number to be searched:");
    scanf("%d",&n);
    binary_search(a,n,low,high);
}