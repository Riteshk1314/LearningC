#include<stdio.h>
//Linear Search using recursion and pointers

int search(int a[],int *p,int n)
{
    if(p==a)
    {
        if(*p==n)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    else
    {
        if(*p==n)
        {
            return 1;
            
        }
        else 
        {
            search(a,p-1,n);
        }
    }
}

int main()
{
    int a[5]={10,20,30,40,50};
    int *p;
    int i=sizeof(a)/sizeof(int)-1;
    p=a+i;
    printf("Enter number to be searched:");
    int n;
    scanf("%d",&n);
    if(search(a,p,n)==1)
    {
        printf("Number Found");
    }
    else 
    {
        printf("Number Not Found");
    }
}
