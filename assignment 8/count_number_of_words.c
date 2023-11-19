#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("TEXT.txt","r");
    int count=1;
    char ch;
    while(1)
    {
        ch=fgetc(fp);
        if(ch==' ')
        {
            count++;
        }
        else if(ch==EOF)
        {
            break;
        }        

    }
    printf("Number of words are %d",count);
}