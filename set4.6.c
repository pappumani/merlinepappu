#include <stdio.h>
main()
{
char a[100];
int b;
int c=0;
printf("Enter a string: ");
gets(a);
for(b=0;a[b]!=NULL;b++)
{
if(a[b]>='0'&& a[b]<='@')
c++;        
}
printf("\nSpecial Characters: %d",c);
}
