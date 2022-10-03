// 4. Transpose of a matrix

#include <stdio.h>

int main()
{
  int a[5][5],b[5][5],m,n,i,j;
  
  printf("Enter the no. of rows and columns :-\n");
  scanf("%d%d",&m,&n);
  
  printf("Enter the elements of Array :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	 scanf("%d",&a[i][j]);
  }
  
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	 b[i][j]=a[j][i]; //transposing the elements
  }
  
  printf("Transpose of the Matrix is :-\n");
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	 printf("%d\t",b[i][j]);
  	 
    printf("\n");
  }
  
  return 0;
}
