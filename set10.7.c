#include <stdio.h>
int main()
{
int i,len;
char a[10];
scanf("%s",&a);
len=strlen(a);
for(i=len-1;i>=0;i--)
{
printf("%c",a[i]);	
}
}
