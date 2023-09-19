//Write a program to print the pattern
//    1
//   232
//  34543
// 4567654
//567898765

#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=(5-i);j++)
        {
            printf(" ");
        }
        for(k=i;k<=(2*i-1);k++)
        {
            printf("%d",k);
        }
        for(l=(2*i-1)-1;l>=i;l--)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}