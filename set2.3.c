#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the value for a");
scanf("%d",&a);
for(b=1;b<=a/2;b++)
if(a%2==0)
{
c=1;
break;
}
if(c==0)
{
printf("prime");
}
else
{
printf("not prime");
}
}
