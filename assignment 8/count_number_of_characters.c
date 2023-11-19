#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("TEXT.txt","r");
    int chars=0;
    char ch;
    while(1)
    {
        ch=fgetc(fp);
        if(ch>=0 && ch<=255)
        {
            chars++;
        }
        else if(ch==EOF)
        {
            break;
        }
    }
    fclose(fp);
    printf("Number of Characters are %d\n",chars);
    
}