#include<stdio.h>
void main()
{
int a,n,b=0;
printf("enter the value of n\n");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
b=a+b;
}
prinf("%d",b);
}
