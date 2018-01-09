#include<stdio.h>
int main()
{
int a;
printf("enter the value");
scanf("%d",&a);
if(a<0)
{
printf("negative number");
}
elseif(a>0)
{
printf("positive number");
}
else
{
printf("the value is zero");
}
return 0;
}
