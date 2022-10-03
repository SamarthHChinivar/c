#include<stdio.h>
int main()
{int sum=0,n,dig,n1;
printf("Enter the value of n:- ");
scanf("%d",&n);
n1=n;
while(n!=0)
{dig=n%10;
sum=sum+dig;
n=n/10;
}
printf("\n Sum of digits of %d is %d",n1,sum);
return 0;
}
