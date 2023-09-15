//Write a program to convert Decimal number into Octal

#include<stdio.h>
int main()
{
    int n;
    printf("Enter Decimal Number to be converted to Octal:");
    scanf("%d",&n);
    int a[10];
    int digit,i;
    while(n!=0)
    {
        digit=n%8;
        a[i]=digit;
        i++;
        n=n/8;
    }
    //Octal will be reverse of this array, so reverse the for loop
    for(i=9;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}