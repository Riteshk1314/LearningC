//Write a program to calculate the mode of an array
//Mode is the value that occurs most frequently in the array
// if there are multiple modes then this program just reports one of them
// Made by Mr. Rehnoor Aulakh (A50)

#include<stdio.h>
int main(){
    int A[]={1,2,3,4,5,5,5,6,7,9,9,9,9,-4,-2,-100,1,1,-2,-5,60};
    int  n = sizeof(A)/sizeof(A[0]), f[n];
    //calculate the duplicates
    int i,j;
    int count=0;
    int large,pos;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            if(A[i]==A[j])
            {
                count++;
                f[i]=count;
            }
        }
    }
    large=f[0];
    pos=0;
    for(i=0;i<n;i++)
    {
        if(f[i]>large)
        {
            large=f[i];
            pos=i;
        }
    }
    printf("Mode Of the Array is %d",A[pos]);
 
return 0;    
}