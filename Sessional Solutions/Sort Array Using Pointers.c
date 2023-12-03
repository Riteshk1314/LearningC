//Sort Array Using Pointers

#include<stdio.h>

int main()
{
    int a[]={44,32,55,34,78,22,10};
    int n=sizeof(a)/sizeof(int);
    int *p;
    p=a;
    int *q;
    int temp;
    for(p=a;p<=a+n-1;p++)
    {
        for(q=a;q<=a+n-2-;q++)
        {
            if(*q>*(q+1))
            {
                temp=*q;
                *q=*(q+1);
                *(q+1)=temp;
                
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}