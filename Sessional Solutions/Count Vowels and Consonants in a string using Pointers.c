//Write a program to count vowels and consonants in a string using pointers

#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    puts("Enter String:");
    gets(s);
    char *p;
    p=s;
    int vowels=0;
    int consonants=0;
    while(1)
    {
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
        {
            vowels++;
        }
        else if((*p>=65 && *p<=90) || (*p>=97 && *p<=122))
        {
            consonants++;
        }
        
        else if(p>s)
        {
            break;
        }
        p++;
    }
    printf("Number of vowels and consonants are %d and %d",vowels,consonants);
    
}