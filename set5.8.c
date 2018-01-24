#include<stdio.h>
main()
{
int a, i, num[100], sum = 0, avg;
scanf("%d", &a);
while (n > 100 || a <= 0)
{
scanf("%d", &a);
}
for(i = 0; i < a; ++i)
{
printf("%d. Enter number: ", i+1);
scanf("%d", &num[i]);
sum += num[i];
}
avg= sum / a;
printf("Avg = %.2f", avg);
}
