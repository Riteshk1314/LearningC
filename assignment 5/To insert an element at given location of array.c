//Write a program to insert a number at a given location of an array

#include<stdio.h>
int main()

{
    int a[6]={15,26,37,42,69};
    printf("Enter the number to insert");
    int n;
    scanf("%d",&n);
    int ind;
    printf("Enter the index of number");
    scanf("%d",&ind);
    for(int i=5;i>=ind;i--)
    {
        a[i]=a[i-1];
    }
    a[ind]=n;
    for(int i=0;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
}
