//Binary Search Program
//Condition- All the elements should be sorted in the Array

#include<stdio.h>
int main()
{
    int a[]={1,5,8,11,17,28,34,49,56,72,101};
    int size;
    //Size will give the size of Array
    //Method to find size of an unknown array- sizeof(a)/sizeof(int)
    size=sizeof(a)/sizeof(int);
    int mid,high,low,flag=0;
    low=0;
    high=size-1;
    int n;
    printf("Enter Number to be searched in the array");
    scanf("%d",&n);
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(a[mid]==n)
        //Number is Found at the middle of the array
        {
            flag=1;
            break;
        }
        //Number is found on the right side of mid
        //So update the mid to be low 
        else if(a[mid]<n)
        {
            low=mid+1;
        }
        //Else the number would be found on the left side of mid
        //So update the high to be mid
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        printf("Number Found");
    }
    else
    {
        printf("Number Not Found");
    }
}