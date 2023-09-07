//Linear Search Flag Method

#include<stdio.h>
int main()
{
    int a[10]={1,2,34,55,77,88,99,66,25,485};
    int i,flag=0,n;
    printf("Enter the number you wish to find in the array:");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
        if(a[i]==n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Number Does Not Exist");
    }
    else
    {
    printf("Number Found at index %d",i);    
    
    }
    
}

