#include <stdio.h>
int main() 
{
	int kab,opp,i;
	
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&kab,&opp);
	if(kab>opp)
	{
		printf("\n%d",kab-opp);
	}
	else
	{
		printf("\n%d",opp-kab);
	}
	}
}
