//Credits- Ridhi Gupta 1A50
#include <stdio.h>
#include <string.h>
void input(char n[])
{
    printf("kindly enter the string= ");
    gets(n);

}
void display(char n[]){
    printf("\ninput string is ");
    puts(n);
}

void reverse(char n[],char *q){
    if(q<n)
    {
        return;
    }
    else 
    {
    printf("%c",*q);
    reverse(n,q-1);   //calling function
    }
}

    int main(){
    char n[20];
    input(n);
    display(n);
    char *p=n;
    char *q;
    q=p + strlen(n) - 1;   //setting the pointer to last char of string
    
    reverse(n,q);
}
