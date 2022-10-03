// 1. Program to read and print 2-D Array

#include <stdio.h>

int main()
{
  int a[5][5],m,n,i,j;
  
  printf("Enter no. of rows and columns :-\n");
  scanf("%d%d",&m,&n);
  
  printf("Enter the elements of array :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);	
  }
  
  printf("Array elements are :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
     printf("%d\t",a[i][j]);
	
	printf("\n");
  }
  
  return 0;
}
