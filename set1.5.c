#include<stdio.h>
main()
{
int a,b,c;
printf("enter the values of a,b,c/n");
scanf("%d,%d%d",&a,&b,&c);
if(a<b&&a<c)
{
printf("a is larger");
}
else if(b<a)&&(b<c)
{
printf("b is larger");
}
else
{
printf("c is larger");
}
}
