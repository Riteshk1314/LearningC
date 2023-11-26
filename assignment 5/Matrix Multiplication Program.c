//Matrix Multiplication Program

#include<stdio.h>

int main()
{
    int rows1,cols1;
    int rows2,cols2;
    printf("Enter the rows and columns of first matrix\n");
    scanf("%d %d",&rows1,&cols1);
    printf("Enter the rows and columns of second matrix\n");
    scanf("%d %d",&rows2,&cols2);
    //Checking
    if(cols1!=rows2)
    {
        printf("Matrix Multiplication Not Possible");
        return -1;
    }
    else
    {
        int a[rows1][cols1];
        int b[rows2][cols2];
        int c[rows1][cols2];
        int i,j,k;
        //Inputing
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<cols1;j++)
            {
                printf("Enter %d %d element of first matrix\n",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<rows2;i++)
        {
            for(j=0;j<cols2;j++)
            {
                printf("Enter %d %d element of second matrix\n",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        //Matrix Multiplication Logic
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<cols2;j++)
            {
                c[i][j]=0;
                for(k=0;k<cols1;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //Printing the Resultant Matrix
        printf("----------------------------Resultant Matrix----------------------------\n");
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<cols2;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    
}