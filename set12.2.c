#include<stdio.h>
int main()
{
    int n,k,i,a[50],count=0;
    scanf("%d\t",&n);
    scanf("%d\n",&k);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==k)
    {
    count=1;
    }
    }
    if(count==0)
    {
    	printf("no");
    }
    else
    {
    	printf("yes");
    }
    }
