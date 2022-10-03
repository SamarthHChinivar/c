//2. Sum of array elements using pointers

#include<stdio.h>
int main()
{
  int sum=0,i,n,a[30];
  
  printf("Enter no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter %d elements of array :-\n",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",a+i);
  }
  for(i=0;i<n;i++)
  {
  	sum=sum+ *(a+i);
  }
  printf("Sum of %d array elements are:- %d",n,sum);
  return 0;
}
