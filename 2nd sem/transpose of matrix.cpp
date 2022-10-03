 //program for transpose of matrix
 #include <stdio.h>
 
 int main()
{
  int m,n,i,j,a[30][30],b[30][30];
  
  printf(" Enter no. of rows and columns of the matrices:- ");
  scanf("%d%d",&m,&n);
  
  printf("\n Enter the elements of matrix A:- ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    	scanf("%d",&a[i][j]);
  }
  
 printf("\n Elements of matrix A are:-\n");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     printf("%d\t",a[i][j]);
   }
   printf("\n");
}
 
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   	b[i][j]=a[j][i];
 }
 
 printf("\n Transpose of matrix A:-\n");
 for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{printf("%d\t",b[i][j]);
}
 printf("\n");
}
 return 0;
}
