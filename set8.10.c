#include<stdio.h>
int main()
{
int a,rem,dig;
scanf("%d",&a);
while(a>0)
{
dig= a % 10;
a= a / 10;
rem = dig% 2;
if(rem != 0)
printf("\t %d",dig);
}
} 
