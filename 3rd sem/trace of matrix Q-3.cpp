// 3. Program to find the trace of matrix

#include <stdio.h>

int main()
{
  int a[5][5],m,n,i,j,trace=0;
  
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
      {
	    if(i==j)
		trace = trace + a[i][j];
	  }
    }
    
  printf("Trace of the Matrix is :- %d \n",trace);
  
  return 0;
}
