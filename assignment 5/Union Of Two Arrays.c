//Union Of Elements of Two Arrays

//Union Of A and B is A+B But the common elements of A and B will occur twice, so we need to remove them
//Read the Removing duplicates program and merging arrays program for more clarity
//Specific Example (Generealized Form at the end)
#include<stdio.h>
int main()
{
    int a[7]={1,33,44,23,65,84,90};
    int b[7]={23,45,66,85,91,2,6};
    int i,j,k;
    //Now a intersection b should be {1,33,44,23,65,84,90,45,66,85,91,2,6}
    //As 23 is occuring twice, so we will not include it.
    int c[14];
    //Theoratically a intersection b should be of size 14, if duplicates would be found, we will decrease the size
    //Copy a as it is to c
    for(i=0;i<7;i++)
    {
        c[i]=a[i];
    }
    //First 7 elements are copied to c
    //Now copy b elements to c
    for(i=7;i<14;i++)
    {
        c[i]=b[i-7];
    }
    //Now both a and b are copied to c, only task left is to remove the duplicates
    for(i=0;i<13;i++)
    {
        for(j=i+1;j<14;j++)
        {
            if(c[i]==c[j])
            {
                for(k=j;k<14;k++)
                {
                    c[k]=c[k+1];
                }
                j--;
            }
        }
    }
    for(i=0;i<13;i++)
    {
        printf("%d\n",c[i]);
    }
    //Now the duplicates are removed from c, this is a intersection b..
}



//Generealized Form Of A Union B

#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter Size of Array 1:");
    scanf("%d",&n);
    printf("Enter Size of Array 2:");
    scanf("%d",&m);
    int i,j,k,size;
    int a[n],b[m];
    printf("Enter Array 1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Array 2:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n+m];
    size=n+m;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=n;i<n+m;i++)
    {
        c[i]=b[i-n];
    }
    //Now array a and b is copied to c, we need to remove the duplicates
    
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(c[i]==c[j])
            {
                for(k=j;k<size;k++)
                {
                    c[k]=c[k+1];
                }
                j--;
                size--;
            }
        }
    }
    printf("*************************************************************************\nUnion of Array 1 and 2 is:\n");
    
    
    for(i=0;i<size;i++)
    {
        printf("%d\n",c[i]);
    }
}