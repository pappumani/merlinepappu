#include<stdio.h>
int main()
{
int a[5],b=0,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]>=b)
{
b=a[i];
}	
printf("%d",b);
}
}
