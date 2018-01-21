#include<stdio.h>
int main()
{
unsigned char m;
m=22;
while(m>120)
{
printf("%c[%03d]",m,m);
m++;
}
}
