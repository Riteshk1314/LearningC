#include<stdio.h>


int main()
{
    int a[3][5]={{132,244,222,145,12},{23412,123,15,130,2343},{25412,324,2213,123,32}};
    //convert this 2d array into 1d array
    
    int b[3*5];
    int k=0;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            b[k]=a[i][j];
            k++;
        }
    }
    
    //now this b array has all the elements of the matrix and now sort it
    
    for(i=0;i<=13;i++)
    {
        for(j=0;j<=13-i;j++)
        {
            if(b[j]>b[j+1])
            {
                k=b[j];
                b[j]=b[j+1];
                b[j+1]=k;
            }
        }
    }
    //Now the b array is sort, now convert it back to the matrix
    
    k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=b[k];
            k++;
        }
    }
    
    //print the matrix a
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}