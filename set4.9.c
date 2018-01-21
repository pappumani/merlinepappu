#include<stdio.h>
main()
{
int a[5],i,lar;
printf("enter 5 values");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
lar=a[i];
for(i=0;i<5;i++)
{
if(a[i]>lar)
{
lar=a[i];
}
printf("%d",lar);
}
}
