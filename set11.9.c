#include <stdio.h>
int main() 
{
int a[10],i,l=0;
l=a[0];
for(i=0;i<10;i++)
{
scanf("%d\n",&a[i]);
if(a[i]<l)
{
l=a[i];
}
}
printf("%d",l);
}
