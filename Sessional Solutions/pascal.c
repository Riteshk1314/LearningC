#include<stdio.h>
void main(){
    int n=4,c;
    for(int i=0;i<=n;i++){
        for(int s=1;s<=n-i;s++){
        printf(" ");
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0)
                c=1;
            else
                c=(c*(i-j+1))/j;
            printf("%d ", c);

        }
        printf("\n");
        
        
    }
}