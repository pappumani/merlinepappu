#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the value\n");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
if(a%b==0)
{
c++;
}
}
if(c==2)
printf("yes");
else
printf("no");
}
