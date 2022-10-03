#include<stdio.h>
int prime(int n);
int main()
{ int n,i;
  printf("Enter the range:-\n");
  scanf("%d",&n);
  printf("Generating prime numbers within %d :-\n",n);
  for(i=2;i<=n;i++)
  { if(prime(i)==1)
    printf("%d\n",i);
  }
 return 0;
}
int prime(int n)
{ int i;
  for(i=2;i<=n/2;i++)
  { if(n%i==0)
  { return 0;
   }   
 }
 return 1;
}
