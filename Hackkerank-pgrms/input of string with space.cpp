#include<stdio.h>
int main()
{ char s[100],ch;
  printf("Enter a charecter :-\n");
  scanf("%c",&ch);
  printf("Enter string :- \n");
  scanf("\n");
  scanf("%[^\n]%*c",s);
  printf("The output is :- \n");
  printf("%c\n",ch);
  printf("%s",s);
  return 0;
}
