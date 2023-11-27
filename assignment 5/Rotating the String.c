//Write a program to rotate the string
#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    printf("Enter String\n");
    scanf("%s",&s);
    int x;
    x=strlen(s);
    for(int i=0;i<x;i++)
    {
        for(int j=i;j<x;j++)
        {
            printf("%c",s[j]);
        }
        for(int k = 0;k<i;k++)
        printf("%c",s[k]);
        printf("\n");
    }
}
