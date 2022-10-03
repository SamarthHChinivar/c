#include<stdio.h>
// type 4
int factorial(int n)
{int fact=1,i;
 for(i=1;i<=n;i++)
 fact=fact*i;
 return fact;
}
int main()
{int x,r;
 printf("\n Enter any no.");
 r=factorial(x);
 printf("\n Factorial of %d is %d",x,r);
 return 0;
}
