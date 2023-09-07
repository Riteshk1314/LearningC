#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,n,b;
    printf("Enter the index at which you wish to insert number\n");
    scanf("%d",&i);
    printf("Enter the number you wish to insert\n");
    scanf("%d",&n);
    b=a[i];
    a[i]=n;
    n=b;
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
    
}