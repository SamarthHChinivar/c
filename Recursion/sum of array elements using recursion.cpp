#include<stdio.h>
int sum_of_n(int a[],int n);
int main()
{
  int i,a[30],n;
  printf("Enter the no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter the elements of array :-\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  sum_of_n(a,n-1);
  printf("Sum of array elements is %d\n",sum_of_n(a,n-1));
  return 0;
}

int sum_of_n(int a[],int n)
{
  if(n==-1)
  return 0;
  
  return a[n]+sum_of_n(a,n-1);
}
