#include<stdio.h>
void main(){
    int digit,number,x=12,n,a=1,sum;
    while(n!=0){
        x=number%10;
        for(int i=0;i<x;i++){
            a=a*i;
        }
        sum=sum+a;
        x=x/10;
    }
    printf("%f", sum);


}