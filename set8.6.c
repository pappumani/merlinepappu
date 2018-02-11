#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	for(b=2;b<=a/2;b++)
	while(a%b==0)
	{
	c=1;
	break;
	}
	if(c==0)
	{
	printf("no");
	}
	else 
	{
	printf("yes");
	}
}
