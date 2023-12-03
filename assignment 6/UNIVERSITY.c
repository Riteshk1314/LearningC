#include<stdio.h>
#include<string.h>

int main()
{
    char a[50]="UNIVERSITY";
    int i,j;
    for(i=0;i<=8;i=i+2)
    {
        for(j=0;j<i+2;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
    for(i=6;i>=0;i=i-2)
    {
        for(j=0;j<i+2;j++)
        {
            printf("%c",a[j]);
        }
        printf("\n");
    }
}