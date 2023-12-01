//Write a program to read elements of 2D matrix and use a function to check whether sum of the row is palindrome or not 
//and store this information in the last column of the matrix
//I will store 1 if sum of is prime and 0 if its not
//I have made one extra column to also store the sum to understand how it works
#include<stdio.h>

void palindrome(int a[4][6])
{
    int i,j;
    int digit;
    int sum=0;
    int flag=1;
    for(i=0;i<4;i++)
    {
        int total=0;
        sum=0;
        for(j=0;j<4;j++)
        {
            sum=sum+a[i][j];
        }
        a[i][j]=sum;
        int copy=sum;
        //check if sum is palindrome
        while(sum!=0)
        {
            digit=sum%10;
            total=total*10+digit;
            sum=sum/10;
            
        }
        if(total==copy)
        {
            a[i][5]=1;
        }
        else
        {
            a[i][5]=0;
        }
    }
    
}

void display(int a[4][6])
{
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

int main()
{
    int a[4][6]={{1,2,4,4},{4,5,7,7},{7,8,9,319},{10,11,12,13}};
    palindrome(a);
    display(a);
    
}