#include <stdio.h>
VOID main()
{
    char A;
    int x,y;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    x= (A== 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u');
    y= (A == 'A' || A == 'E' || A== 'I' || A == 'O' || A == 'U');
    if (x||y)
        printf("%c is a vowel.", A);
    else
        printf("%c is a consonant.", A);
   
}
