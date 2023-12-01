//Q1 1A48
//Write a program to reverse a string without reversing the words
//Eg string = "Today is a sessional day"
//Output- "day sessional a is Today"


#include<string.h>
#include<stdio.h>


int main()
{
    char s[100]="Today is a sessional day";
    char word[100]="";
    char ans[100]="";
    char temp[2];
    int i=0;
    int j=0;
    for(i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]==' ' || i==0)
        {
            if(i==0)
            {
                temp[0]=s[i];
                temp[1]='\0';
                strcat(word,temp);
            }
            strrev(word);
            strcat(ans,word);
            strcat(ans," ");
            strcpy(word,""); 
        } 
        else 
        {
            temp[0]=s[i];
            temp[1]='\0';
            strcat(word,temp);
            
        }
    }
    printf("%s",ans);
}