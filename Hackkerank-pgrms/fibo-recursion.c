#include <stdio.h>

int fib(int n)
{
	if(n == 1)
		return 1;
	else if(n == 2)
		return 2;
	else
		return fib(n-1) + fib(n-2);
}

void main()
{
	int n,i;
	
	printf("Enter number: \n");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
		printf("%d	", fib(i));
}
