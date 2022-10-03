#include<stdio.h>
int main()
{int rev=0,n,dig,n1;
printf("Enter the value of n:- ");
scanf("%d",&n);
n1=n;
while(n!=0)
{dig=n%10;
rev=rev*10+dig;
n=n/10;
}
if(n1==rev)
printf("\n The no. is a Palindrome no.");
else
printf("\n The no. is Not a Palindrome no.");
return 0;
}
