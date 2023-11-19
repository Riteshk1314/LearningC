#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("TEXT.txt","r");
    char ch;
    int count=0;
    while(1)
    {
        ch=fgetc(fp);
        if(ch=='.')
        {
            count++;
        }
        else if(ch==EOF)
        {
            break;
        }

    }
    printf("Number of sentences are %d",count);
}