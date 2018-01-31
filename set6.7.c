#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d\t%d",&a,&b);
  if(a!=0)
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d\t%d",a,b);
 
}
