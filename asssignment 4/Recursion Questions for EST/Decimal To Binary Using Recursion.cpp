//Decimal to Binary using Recursion

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char ans[50]="";
void binary(int n,char ans[10])
{
    if(n==0)
    {
        strrev(ans);
        cout<<ans;
    }
    else
    {
        int digit=n%2;
        char str[10];
        sprintf(str, "%d", digit);
        strcat(ans,str);
        binary(n/2,ans);
        
    }
}
int main()
{
    binary(19,ans);
}