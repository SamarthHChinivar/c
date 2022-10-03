#include <stdio.h>
#include <string.h>

int main()
{
  char s1[10];
  printf("Enter string 1 :- \n");
  gets(s1);
  strrev(s1);
  puts(s1);
  return 0;
}
