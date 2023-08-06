#include <stdio.h>

void main()
{
	int n,i;
	int a=1, b=2, sum=0;
	
	printf("Enter number: \n");
	scanf("%d", &n);
	
	if(n>=1)
		printf("%d	",a);
		
	if(n>=2)
		printf("%d	",b);
	
	if(n>=3)
	{
		for(i=1; i<=n-2; i++)	
		{
			sum = a + b;
			printf("%d	", sum);
		
			a = b;
			b = sum;
		}
	}
}
