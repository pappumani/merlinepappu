#include<stdio.h>
int main()
{
int a,b,i,j,temp=0;
	printf("Enter values");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++)
	{
		for(j=i;j>0;j--)
		{
			if(i%j==0)
			temp++;
		}
		if(temp==2)
		printf("%d\t",i);
		temp=0;
	}
}

