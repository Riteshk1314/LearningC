//Write a program to delete a given element in an array
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("Enter the number to be deleted:");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            for(int j=i;j<9;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        printf("%d\n",a[i]);
    }
}