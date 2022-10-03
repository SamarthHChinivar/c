#include <stdio.h>

void insertion_sort(int a[],int n)
{ 
  int i,j,item;
  
  for(i=0;i<n;i++)
  {
  	item = a[i];
  	j = i-1;
  	
  	while(j != -1 && item<a[j])
  	{
  	  a[j+1] = a[j];
  	  j--;
	}
	
	a[j+1] = item;
  }
}

void main()
{
  int a[30],n,i;
   
  printf("Enter the no. of elements: \n");
  scanf("%d",&n);
  
  printf("Enter %d elements of array: \n",n);
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  	
  insertion_sort(a,n);
  
  printf("After Sorting , array elements are: \n");
  for(i=0;i<n;i++)
  	printf("%d ",a[i]);
  	
  printf("\n");
}
