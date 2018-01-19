#include<stdio.h>
int main()
{
int j,a,b,c,d,e=0;
scanf("%d,%d",&a,&b);
for(j=a;j<=b;j++)
{
e=0;
c=d;
}
while(c>0)
{
d=c%10;
e=e+(d*d*d);
c=c/10;
}
if(e=j)
{
printf("%d\t",j);
}
}
