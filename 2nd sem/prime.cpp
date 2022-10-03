#include<stdio.h>
#include<stdlib.h>
int main()
{int i,n;
 printf(" Enter value of n :- ");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {if(n%i==0)
 {printf("\n %d is not a prime no.",n);
  exit(0);
 }
 }
 printf("\n %d is a prime no.",n);
 return 0;
}
