#include <stdio.h>
int main()
{
	int n,k,r[10],i,t=0;
	scanf("%d",&n);
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&r[i]);
	}
	for(i=0;i<n;i++)
	{
            if(r[i]==k)
            {
          	t++;
            }
	}
	printf("%d",t);

}
