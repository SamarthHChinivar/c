//2. Sum of array elements

#include<stdio.h>
int main()
{
  int i,a[30],sum=0,n;
  
  printf("Enter the no. of elements of array :-\n");
  scanf("%d",&n);
  printf("Enter the elements of the array :-\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++)
  {
  	sum=sum+a[i];
  }
  printf("Sum of Array elements is :- %d\n",sum);
  
  return 0;
}
