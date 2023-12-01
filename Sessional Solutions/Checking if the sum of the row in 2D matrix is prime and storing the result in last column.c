//Write a program to read elements of 2D matrix and use a function to check whether sum of the row is prime or not 
//and store this information in the last column of the matrix
//I will store 1 if sum of is prime and 0 if its not
//I have made one extra column to also store the sum to understand how it works
#include<stdio.h>

void prime(int a[4][6])
{
    int i,j;
    int sum=0;
    int flag=1;
    for(i=0;i<4;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
        a[i][j]=sum;
        //check if sum is prime
        for(j=2;j<sum;j++)
        {
            if(sum%j==0)
            {
                flag=0;
                break;
            }
        }
        a[i][5]=flag;
    }
    
}

int main()
{
    int a[4][6]={{1,2,4,4},{4,5,7,7},{7,8,9,10},{10,11,12,13}};
    prime(a);
    //Printing the matrix
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }
}