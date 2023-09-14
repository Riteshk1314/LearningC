//Write a program to convert decimal number to binary

#include<stdio.h>
int main()
{
    int a[10];
    int n,size;
    printf("Enter Decimal Number to be Converted to Binary:");
    scanf("%d",&n);
    int i,digit;
    i=0;
    while(n!=0)
    {
        digit=n%2;      //Remainder by dividing with 2 will be stored in digit
        a[i]=digit;     //store the digit in the array order wise, initially i is 0 so a[0]=digit
        i++;            //Increment value of i so that next digit gets stored in a[1],a[2],.....so on
        n=n/2;          //Quotient by dividing with 2 will be overwritten to n
    }       //Continue this loop till n becomes 0
    
    
    //But the binary number will be reverse of this array
    //So while printing, we can reverse the for loop
    
    for(i=9;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}