#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("POEM.txt","r");
    int chars=0,spaces=0,tabs=0,newline=0;
    char ch;
    while(1)
    {
        ch=fgetc(fp);
        if(ch==' ')
        {
            spaces++;
        }
        else if(ch=='\t')
        {
            tabs++;
        }
        else if(ch=='\n')
        {
            newline++;
        }
        else if(ch>0 && ch<=255)
        {
            chars++;
        }
        else if(ch==EOF)
        {
            break;
        }

    }
    fclose(fp);
    printf("Characters %d\n",chars);
    printf("Spaces %d\n",spaces);
    printf("Tabs %d\n",tabs);
    printf("New lines %d",newline);
}