#include<stdio.h>


int main()
{
    int a[3][5]={{132,244,222,145,12},{23412,123,12,132,2343},{23412,324,2213,123,132}};
    //sort each row of matrix and then print it
    
    int t,i,j,k;
    for(i=0;i<=2;i++)
    {
        //now first row is selected
        
        //sort it 
        for(j=0;j<=3;j++)
        {
            for(k=0;k<=3-j;k++)
            {
                if(a[i][k]>a[i][k+1])
                {
                    t=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=t;
                }
            }
        }
        
    }
    
    //now print the matrix with the rows sorted
    
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}