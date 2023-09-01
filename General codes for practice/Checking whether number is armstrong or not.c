//Write a program to check whether number is armstrong or not
//Armstrong numbers are those which give the same number when their digits are added raised to power the number of digits
//eg 153=1^3+5^3+3^3
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,digit,count=0,total=0,num;
    printf("Enter a number to check Armstrong:");
    scanf("%d",&n);
    x=n;
    num=n;
    //counting the number of digits
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    while(x!=0)
    {
        digit=x%10;
        total=total+pow(digit,count);
        x=x/10;
    }
    if(total==num)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is Not Armstrong");
    }
}