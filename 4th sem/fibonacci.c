#include <stdio.h>

int f(int n)
{
  if(n <= 1)
  	return n;
  	
  return f(n-1) + f(n-2);
}

void main()
{
  int n,r;
  
  printf("Enter value of n: \n");
  scanf("%d",&n);
  
  r = f(n);
  
  printf("Fibonacci no. = %d \n",r);
}
