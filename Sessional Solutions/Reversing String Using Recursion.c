//Write a program to reverse a string using recursion

#include<stdio.h>
#include<string.h>

char ans[100]="";

void reverse_string(char s[], int i)
{
    char temp[2];
    if(i==-1)
    {
        puts("\n--------------Reversed String is----------------\n");
        puts(ans);
        
    }
    else 
    {
        temp[0]=s[i];
        temp[1]='\0';
        strcat(ans,temp);
        reverse_string(s,i-1);
    }
    
    
}

int main()
{
    char s[100];
    puts("Enter String to be reversed:\n");
    gets(s);
    reverse_string(s,strlen(s));
}