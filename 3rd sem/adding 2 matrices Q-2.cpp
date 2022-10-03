// 2. Program to add 2 matrices

#include <stdio.h>

int main()
{
  int a[5][5],b[5][5],c[5][5],m,n,i,j;
  
  printf("Enter the no. of rows and columns :-\n");
  scanf("%d%d",&m,&n);
  
  printf("Enter the elements of Array A :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  		scanf("%d",&a[i][j]);
  }
  
  printf("Enter the elements of Array B :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  		scanf("%d",&b[i][j]);
  }
  
  printf("Sum of matrices A and B is :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  		c[i][j]=a[i][j]+b[i][j];
  }
  
  printf("Resultant Matrix is :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  		printf("%d\t",c[i][j]);
  	 
    printf("\n");
  }
  
  return 0;
}
