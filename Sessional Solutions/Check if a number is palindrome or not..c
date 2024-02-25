// Write a program to check if a given number is palindrome or not.

#include <stdio.h>

int main(){
    int num,a,i,dig,rev=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    a=num;
    while(a!=0){
        dig=a%10;
        rev=rev*10+dig;
        a/=10;
    }
    if(rev==num) printf("It is a palindrome");
    else printf("It is not a palindrome");
    return 0;
}
