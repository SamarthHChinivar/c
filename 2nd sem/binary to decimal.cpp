#include<stdio.h>
int main()
{int n,binary,decimal=0,base=1,rem;
printf("Enter a binary number(1s and 0s) \n");
scanf("%d",&n); /* maximum 4 digits */
binary=n;
while(n>0)
{rem=n%10;
decimal=decimal+rem*base;
n=n/10;
base=base*2;
}
printf("The Binary number is = %d \n",binary);
printf("Its decimal equivalent is = %d \n",decimal);
return 0;
}
