//Write a program to print the pattern
//    1
//   232
//  34543
// 4567654
//567898765

#include <stdio.h>

int main(){
    int i,j,k,row;
    printf("Enter the no. of rows : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*(i-1)+1;j++){
            if(j<=i) printf("%d",i+j-1);
            if(j>i){
                for(k=2*(i-1);k>=i;k--){
                    printf("%d",k);
                }
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
