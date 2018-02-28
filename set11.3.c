#include<stdio.h>
#include<string.h>
int main() 
{
 char a[10];
 int i;
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]>='a'&&a[i]<='z')
 {
 printf("%c",a[i]-32);
 }
 }
}
