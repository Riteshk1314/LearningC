//In the dev cpp compiler, output 123456 shows 1 but in the online compiler it shows 0 (compiler issue)

#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("Enter Your Password:");
	scanf("%s",a);
	int size;
	size=strlen(a);
	int x,y,z;
	int i;
	if(size>=6)
	{
		x=1;
	}
	for(i=0;i<size;i++)
	{
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
		{
			y=1;
			break;
		}
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			z=1;
			break;
		}
	}
	if(x==1 && y==1 && z==1)
	{
		printf("%d",1);
		
	}
	else
	{
		printf("%d",0);
	}
}
