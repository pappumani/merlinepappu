#include<stdio.h>
int main()
{
    int a,b,i,ar[50];
    scanf("%d\t",&a);
    scanf("%d\n",&b);
    for(i=0;i<a;i++)
    {
    scanf("%d",&ar[i]);
    if(ar[i]==b)
    {
     printf("%d",ar[i]);
    }
    }
}
