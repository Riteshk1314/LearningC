//Write a program to rotate the string
#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    printf("Enter String");
    scanf("%s",&s);
    int x;
    x=strlen(s);
    strcat(s,s);
    for(int i=0;i<strlen(s)-x-1;i++)
    {
        for(int j=i;j<x+i;j++)
        {
            printf("%c",s[j]);
        }
        printf(",");
    }
}