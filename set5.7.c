#include<stdio.h>
main()
{
int i,n;
int m[100];
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("enter number %d",i+1);
scanf("%d",&m[i]);
}
for(i=1;i<n;++i)
{
if(m[0]<m[i])
{
(m[0]=m[i])
printf(largest number=%d",m[0]);
}
else
{
if(m[0]>m[i])
{
(m[0]=m[i])
printf("smallest number=%d",a[0]);
}
}
}
}
