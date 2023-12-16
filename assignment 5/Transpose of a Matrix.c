//Transpose of a matrix

#include<stdio.h>

int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int t;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)        //because if full loop will be run from 0 to 3, then eg 1,2 will be swapped with 2,1 and again 2,1 will be swapped with 1,2 so it will effectively remain same
        {                       //now only 1,2 will be swapped with 2,1
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}