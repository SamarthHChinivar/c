#include<stdio.h>
int main()
{int n,i;
printf("Enter the value of n :- ");
scanf("%d",&n);
if(n>0)
{printf("\n %d natural numbers are :-",n);
for(i=1;i<=n;i++)
{printf("\n %d",i);
}
}
else
{printf("\n Invalid input");}
return 0;
}
