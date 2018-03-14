#include<stdio.h>
#include<string.h>
int main()
{
char k[10];
int i,len;
scanf("%s",k);
len=strlen(k);
for(i=len-1;i>=0;i--)
{
printf("%c",k[i]);
}
}
