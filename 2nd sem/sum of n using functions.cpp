#include<stdio.h>
int sum_of_n(int n)
{
 int i,sum=0;
 for(i=1;i<=n;i++)
 {sum=sum+i;
 }
 return sum;
}

int main()
{
 int n,r;
 printf("Enter the value of n:- \n");
 scanf("%d",&n);
 sum_of_n(n);
 r=sum_of_n(n);
 printf("Sum from 1 to %d is %d \n",n,r);
 return 0;
}
