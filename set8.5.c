#include<stdio.h>
#include<string.h>
int main()
{
int count=0,i,d;
char str[10];
for(i=0;str[i]!='\0';i++)
{
count++;
}
printf("%d",count);
d=count/2;
if(d%2==0)
{
str[d]=count;
str[d+1]=count;
for(i=0;str[i]!='\0';i++)
printf("%c",str[i]);
}
else
{
str[d]=count;
for(i=0;str[i]!='\0';i++)
printf("%c",str[i]);
}
}
