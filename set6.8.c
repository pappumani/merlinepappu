#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d\t%d",&a,&b);
  a^=b;
  b^=a;
  a^=b;
  printf("After swapping %d %d",a,b);
}
