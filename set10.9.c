#include <stdio.h>
int main()
{
int a,b,c,m,n;
scanf("%d %d %d",&a,&b,&c);
if(a!=0)
{
m=a*b;
n=m%c;
}
printf("%d",n);
}
