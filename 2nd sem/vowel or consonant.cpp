#include<stdio.h>
int main()
{char a;
printf("Enter any charecter:- ");
scanf("%c",&a);
if('a'==a||'A'==a||'e'==a||'E'==a||'i'==a||'I'==a||'o'==a||'O'==a||'u'==a||'U'==a)
printf("\n Charecter %c is a Vowel",a);
else
printf("\n Charecter %c is a Consonant",a);
return 0;
}
