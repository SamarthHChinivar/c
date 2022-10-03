#include <stdio.h>
int main()
{int n, i, k;
printf("Enter an integer in decimal number system\n");
scanf("%d", &n);
printf("%d in binary number system is:\n", n);
for(i=31;i>=0;i--)
{k =n>>i;
if(k&1)
printf("1");
else
printf("0");
}
printf("\n");
return 0;
}
