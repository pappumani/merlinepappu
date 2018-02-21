#include <stdio.h>
int main()
{
	char a[10];
	int i,j,temp=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!=0;j++)
		{
			if(a[i]==a[j])
			{
				printf("no");
				temp=1;
				break;
			}
		}
	}
if(temp==0)
{
	printf("yes");
}
