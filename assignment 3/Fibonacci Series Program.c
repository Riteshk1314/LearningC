//Fibonacci Series: 0,1,1,2,3,5,8,13,......................
//Third Term is the sum of first and second term i.e 0 and 1 and series continues

#include<stdio.h>
int main()
{
    int f,s,t,n;
    printf("Enter the number of terms you wish to print:");
    scanf("%d",&n);
    f=0;
    s=1;
    printf("%d\n%d\n",f,s);
    for(int i=1;i<=n-2;i++) //n-2 because first and second will be fixed to 0 and 1
    {
        t=f+s;
        f=s;
        s=t;
        printf("%d\n",t);
    }
}