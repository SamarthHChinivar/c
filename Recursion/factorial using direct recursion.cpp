//1.factorial using recursion

#include<stdio.h>
int fact(int n);
int main()
{
  int n;
  printf("Enter the value of n :-\n");
  scanf("%d",&n);
  fact(n);
  printf("Factorial of %d is :- %d\n",n,fact(n));
  return 0;
}

int fact(int n)
{
  if(n==0)
  return 1;
  else
  return n*fact(n-1);
}
