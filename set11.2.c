#include <stdio.h>
int main() 
{
int a,b=2,c;
scanf("%d %d",&a,&c);
if((a%2==0)&&(c%2==0))
{
a=a/b;
c=c/b;
printf("%d %d",a,c);
}
else
{
printf("%d %d",a,c);
}
}
