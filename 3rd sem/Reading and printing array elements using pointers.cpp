//1. Reading and printing array elements using pointers

#include<stdio.h>
int main()
{
  int i,a[30],n;
  printf("Enter the no. of elements of array :-\n");
  scanf("%d",&n);
  printf("Enter the %d elements of array :-\n",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",a+i);
  }
  printf("%d Array elements are :-\n",n);
  for(i=0;i<n;i++)
  {
  	printf("%d ",*(a+i));
  }
  return 0;
}
