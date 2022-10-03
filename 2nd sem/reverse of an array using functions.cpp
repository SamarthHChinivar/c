#include <stdio.h>
void Reverse_Array(int A[],int n)
{
  int i;
  for(i=n-1;i>=0;i--)
  {printf("%d\t",A[i]);
  }
}

int main()
{
  int A[30],i,n;
  printf("Enter the no. of elements :- \n");
  scanf("%d",&n);
  printf("Enter the elements of Array A :- \n");
  for(i=0;i<=n-1;i++)
  {scanf("%d",&A[i]);
  }
  printf("Reverse of the array is :- \n");
  Reverse_Array(A,n);
  return 0;
}
