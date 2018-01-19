#include<stdio.h>
int main()
{
int a;
int b;
int c;
int d=0;
printf("enter the a value");
scanf("%d",&a);
c=a;
while(a>0)
b=a%10;
d=d*10+b;
a=a/10;
if(d==c)
{
printf("yes");
}
else
{
printf("no");
}
}
