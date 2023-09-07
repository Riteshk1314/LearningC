//Write a program to remove duplicates in an array 

#include<stdio.h>
int main()
{
    int a[50],i,j,k,size;
    printf("Enter the size of array");
    scanf("%d",&size);
    printf("Enter Elements of the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered Elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            //If you find a duplicate that is:
            if(a[i]==a[j])
            {
                //Now when repitive number occures, assign it the next value, similarly all the numbers will be shifted by one on left side
                //So applying loop to shift the numbers:
                for(k=j;k<size;k++)
                {
                    a[k]=a[k+1];
                }
                //Now k=j but k has been assigned value of k+1 i.e the next value 
                //But j will move to j+1 which will skip one value i.e a[k+1] so we need to decrement j
                //Also the size of array will decrease when we will find a duplicate element
                j--;
                size--;
            }
        }
    }
    printf("After Deleting the duplicate elements, the Array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}