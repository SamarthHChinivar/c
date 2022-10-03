//1. Reading and printing array elements 

#include<stdio.h>
int main()
{ int a[30],n,i;
  
  printf("Enter the no. of elements of array:-\n");
  scanf("%d",&n);
  
  printf("Reading the array :-\n");
  printf("Enter the elements of the array:-\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  
  printf("Printing the array elements :-\n");
  printf("The Array elements are :-\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  
  return 0;
}
