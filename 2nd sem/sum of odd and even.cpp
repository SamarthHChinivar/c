#include<stdio.h>
int main()
{int sum1=0,sum2=0,i,n;
printf("Enter any value of n:- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i%2==0)
 sum2=sum2+i;
 else
 sum1=sum1+i;
}
printf("\n Sum of Odd numbers is :- %d",sum1);
printf("\n Sum of Even numbers is:- %d",sum2);
return 0;
}
