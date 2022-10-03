#include <stdio.h>

void deletion(int a[],int n,int POS);

int main()
{
  int a[30],n,POS,i;
  
  printf("Enter the no. of elements:-\n");
  scanf("%d",&n);
  printf("Enter %d elements of array:-\n",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  
  printf("Enter the position to be deleted :-\n");
  scanf("%d",&POS);
  if(POS>=n+1 || POS<=0)
  {
  	printf("Invalid position \n");
  }
  else
  { deletion(a,n,POS);
  	printf("Resultant array is :-\n");
  	for(i=0;i<n-1;i++)
  	{
  	  printf("%d\t",a[i]);
	}
  }
  
  return 0; 
}

void deletion(int a[],int n,int POS)
{
  int i;
  
  for(i=POS-1;i<n-1;i++)
  {
  	a[i]=a[i+1];
  }
}
