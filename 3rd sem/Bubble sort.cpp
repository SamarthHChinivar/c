//4. Bubble Sort

#include<stdio.h>
int main()
{
  int i,a[30],n,j,temp;
  
  printf("Enter the no. of elements of array :-\n");
  scanf("%d",&n);
  printf("Enter the elements of array :- \n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  
  for(i=0;i<n-1;i++)
  {
  	for(j=0;j<n-1-i;j++)
  	{
  	  if(a[j]>a[j+1])
	  {
	    temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;	
	  } 
	}
  }
  
  printf("After sorting :-\n");
  for(i=0;i<n;i++)
  {
  	printf("%d\t",a[i]);
  }
  
  return 0;
}
