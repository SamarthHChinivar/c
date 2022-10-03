 #include<stdio.h>
 int main()
{int sum=0,i,n;
 printf("Enter the value of n :- ");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
{sum=sum+i;
}
 printf("\n The Sum of %d natural numbers are %d",n,sum);
 return 0;
}
