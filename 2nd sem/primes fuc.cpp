#include<stdio.h>
/*type-1*/
void prime();
int main()
{
 prime();
 return 0;
}
void prime()
{int n,i;
 printf(" Enter any no. :- ");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
{if(n%i==0)
{
 printf("\n %d is not a prime no.",n);
 break;
}
 else
 printf("\n %d is a prime no.",n);
 return;
}
}


