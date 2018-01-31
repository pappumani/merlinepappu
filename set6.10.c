#include<stdio.h>
int main()
{
	int a,b,c,temp=0,fib=1;
	printf("enter the a value\n");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
            c=temp+fib;
            temp=fib;
            fib=c;
            printf("%d",c);	
  	}
}
