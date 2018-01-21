#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d",&a,&b);
printf("before swapping a=%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf(after swapping a=%db=%d,a,b);
}
