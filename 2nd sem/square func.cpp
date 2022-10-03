#include<stdio.h>
/* type-2 */
void square(int a)
{int sq;
 sq=a*a;
 printf("\n Square of %d is %d ",a,sq);
 return;
}
int main()
{int x,r;
 printf("\n Enter any no. :- ");
 scanf("%d",&x);
 square(x);
 return 0;
}
