#include <stdio.h>
int main() 
{
int str,pos,a=1,i;
scanf("%d %d",&str,&pos);
for(i=0;i<pos;i++)
   a=a*10;
   printf("%d",str%a);
   return 0;
}
