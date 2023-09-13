//Selection Sort Program
//a[7]={77,89,56,32,91,47,22}
//After Selection Sort runs, a[7]={22,32,47,56,77,89,91}
//Procedure: Find the smallest number in the array and bring it to a[0]
//Then find the second smallest number in the array and bring it to a[1]
//To sort 7 numbers, 6 passes would be enough as the remaining one number would automatically get sorted

#include<stdio.h>
int main()
{
    int a[7]={77,89,56,32,91,47,22};
    int i,j,small=a[0],pos,t;
    //small will store the smallest number and pos will store the position of the smallest number and t is the temporary variable required to swap smallest number with a[0] and so on...
    
    for(i=0;i<=5;i++)   // 7 numbers so 6 passes
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<7;j++)      //No need to compare a[i] with small as they are already equal so start from i+1
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
    }
    for(i=0;i<7;i++)
    {
        printf("%d\n",a[i]);
    }
    
}