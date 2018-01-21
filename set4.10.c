#include<stdio.h>
int main()
{
int a=0,b=1,c,n,temp=0;
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
temp=2;
while(temp<n)
{
c=a+b;
temp++;
printf("%d",c);
a=b;
b=c;
}
}
