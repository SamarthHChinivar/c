#include<stdio.h>
int sum_of_n(int n);
int main()
{
  int n;
  printf("Enter the value of n:-\n");
  scanf("%d",&n);
  sum_of_n(n);
  printf("Sum of natural numbers from 1 to %d is :- %d\n",n,sum_of_n(n));
  return 0;
}

int sum_of_n(int n)
{
  if(n==0)
  return 0;
  else
  return n+sum_of_n(n-1);
}
