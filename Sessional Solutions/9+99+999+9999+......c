//9+99+999+9999+............

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number of terms you wish to print:");
    scanf("%d",&n);
    int i,total=0;
    for(i=1;i<=n;i++)
    {
        total=total*10+9;
        printf("%d + ",total);
    }
    printf("\b\b");
    printf("  ");
}