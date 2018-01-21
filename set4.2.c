#include<stdio.h>
main()
{
char a[10];
int ltr=0,i=0;
scanf("%s",&a[i]);
while(a[i]!='\0')
{
if((a[i]==' ')||(a[i]=='\n')||(a[i]=='\t'))
{
ltr+=1;
}
i++;
}
printf("total words %d",ltr);
}
