#include <stdio.h>
int main()
{
	char a[10];
	int i,temp=0;
	printf("enter the string\n");
	for(i=0;i<=10;i++)
	scanf("%s",&a[i]);
	for(i=0;i<=10;i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
		{
		temp=1;
		}
	}
		if(temp==1)
		{
		printf("yes");
		}
		else
		{
		printf("no");
		}
	}
	
