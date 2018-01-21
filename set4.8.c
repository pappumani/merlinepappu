#include<stdio.h>
void swap(*int,*int)
main()
{
int a,m;
printf("enter values of a,m");
scanf("%%d",&a,&m)
printf("before swapping a=%d,b=%d",a,m);
swap(a,m)
printf("after swapping a=%d,b=%d",a,m);
}
void swap(int*b,int*c)
{
*b=*b^*c;
*c=*b^*c;
*b=*b^*c;
}
