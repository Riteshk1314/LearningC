// 1st write a structure to file

#include<stdio.h>
#include<string.h>
struct student
{
        char name[20];
        int roll_number;
        float marks;
        
};

int main()
{
    char s1[200];
    struct student *p,s[2]={"ABC",1,100,"XYZ",2,50};
    p=s;
    FILE *fp;
    fp=fopen("POEM.txt","wb");
    
    fwrite(p,sizeof(s),6,fp);

    fclose(fp);
    fp=fopen("POEM.txt","rb");
    fread(p,sizeof(s),6,fp);
    for(int i=0;i<=1;i++)
   { 
    printf("%d",(p+i)->roll_number);
    printf("\n%s",(p+i)->name);
    printf("\n%f",(p+i)->marks);
   }
}