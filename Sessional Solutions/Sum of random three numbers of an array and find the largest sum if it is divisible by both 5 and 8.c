#include<stdio.h>
int main()
{
    int a[7]={10,50,20,44,25,61,39};
    int sum=0,large=0;
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<6;j++)
        {
            for(k=j+1;k<7;k++)
            {
                sum=0;
                sum=sum+a[i]+a[j]+a[k];
            }
            if(sum%40==0)
            {
                if(sum>large)
                {
                    large=sum;
                }
            }
        }
    }
    printf("Largest Combination Value is %d",large);
}
