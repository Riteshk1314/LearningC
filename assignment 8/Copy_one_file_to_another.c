//Copy TEXT.txt file to COPY.txt file 

#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("TEXT.txt","r");
    FILE *wr;
    wr=fopen("COPY.txt","w");
    char ch;
    if(fp==NULL)
    {
        printf("Cannot Find Source File!!!!");
        return -1;
    }
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        else
        {
            fputc(ch,wr);

        }
    }
    fclose(fp);
    fclose(wr);
}