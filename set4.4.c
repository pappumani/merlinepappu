#include<stdio.h>
int main()
{
char a[30];
int temp=0;
scanf("%s",a);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
temp++;
}
printf("\n lines=%d",temp);
}
