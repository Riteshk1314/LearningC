#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("TEXT1.txt","r");
    char ch;
    int count=0;
    while(1)
    {
        ch=fgetc(fp);
        if(ch=='\n')
        {
            count++;
        }
        else if(ch==EOF)
        {
            break;
        }
    }
    printf("Number of lines are %d",count);
}