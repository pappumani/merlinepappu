#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int i,len;
scanf("%s",a);
len=strlen(a);
for(i=len-1;i>=0;i--)
{
printf("%c",a[i]);
}
}
