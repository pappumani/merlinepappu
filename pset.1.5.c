#include<stdio.h>
#include<string.h>
int main()
{
 char a[10],b[10];
 int i,j,temp=0,len1,len2;
 scanf("%s %s",a,b);
 len1=strlen(a);
 len2=strlen(b);
 for(i=0;a[i]<='\0';i++)
 {
 for(j=0;b[j]<='\0';j++)
 {
 	if(a[i]==b[j])
 	{
 		temp++;
 	}
 }
 }
 if(temp==len1)
 {
 	printf("yes");
 }
 else
 {
 	printf("no");
 }
 
}
