#include<stdio.h>
#include<string.h>

void UpperLowerPT(char s[])
{
    char ans[50];
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=90)    //means char is uppercase
        {
            ans[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122)      //means char is lowercase
        {
            ans[i]=s[i]-32;
        }
        else            //any other character
        {
            ans[i]=s[i];
        }
    }
    printf("\n---------------The final string is----------------\n%s",ans);
}

int main()
{
    char s[50]="This is ComPutER ProGraM";
    UpperLowerPT(s);
}