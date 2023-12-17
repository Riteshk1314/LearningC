#include<stdio.h>

void move(int N, char src[], char temp[],char dest[])
{
    if(N==1)
    {
        printf("Move disk %d from %s to %s\n",N,src,dest);
    }
    else
    {
        move(N-1,src,dest,temp);
        printf("Move disk %d from %s to %s\n",N,src,dest);
        move(N-1,temp,src,dest);
    }
}

int main()
{
    move(3,"src","temp","dest");
}