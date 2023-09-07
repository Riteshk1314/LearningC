//Bubble sort
#include<stdio.h>
int main()
{
    int a[10];
    int i,j,t;
    for(i=0;i<=9;i++)
    {
        printf("Enter Number\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=8-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("After Sorting..........\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
}