#include<stdio.h>
int  main()
{
int a,b,c;
scanf("%d",&a);
if(a!=0)
{
b=a%10;
c=a+b;
a=a/10;
printf("amstrong");
}
else
{
printf("not amstrong");
}
}
