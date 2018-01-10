#include<stdio.h>
int main()
{
int a;
int s=0;
printf("enter the value");
scanf("%d",&a);
while(a!=0)
{
a/=10;
++s;
}
printf("value is:%d",s);
return 0;
}
