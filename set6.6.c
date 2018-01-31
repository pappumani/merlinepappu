#include<stdio.h>
int main()
{
char a[20];
int i,count=0,sum=0;
scanf("[^\n]%s",&a);
for(i = 0; a[i] !='\0'; i++)
{
if(((a[i]>'a')&&(a[i]<'z'))||((a[i]>'A')&&(a[i]<'Z')))
{
     count++;
}
if((count>0)&&(sum>0))
printf("yes");
else
printf("no");
return 0;
}

