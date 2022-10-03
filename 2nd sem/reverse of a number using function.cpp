#include<stdio.h>
int reverse_of_no(int n);
int main()
{ 
  int n,rev;
  printf("Enter the value of n:-\n");
  scanf("%d",&n);
  rev=reverse_of_no(n);
  printf("Reverse of %d is %d",n,rev);
  return 0;
}
 
int reverse_of_no(int n)
{
  int rev=0,num;
  while(n!=0)
  { num=n%10;
    rev=rev*10+num;
    n=n/10;
  }
  return rev;
}
