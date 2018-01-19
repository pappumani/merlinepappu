#include<stdio.h>
main()
{
int a,b,c;
printf("enter the values");
scanf("%d,%d",&a,&b);
for(c=a+1;c<b;c++)
{
if(c%2==1)
{
printf("%d",c);
}
}
}
