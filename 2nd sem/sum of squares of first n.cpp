#include<stdio.h>
int main()
{int sum=0,n,i;
printf("Enter the value of n:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{sum=sum+(i*i);
}
printf("\n Sum of squares of %d natural numbers is %d",n,sum);
return 0;
}
