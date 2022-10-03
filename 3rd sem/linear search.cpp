//3. Linear Search

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,a[30],key;
  
  printf("Enter the no. of elements of array :-\n");
  scanf("%d",&n);
  printf("Enter the elements of array :-\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  
  printf("Enter the element to be searched :-\n");
  scanf("%d",&key);
  
  for(i=0;i<n;i++)
  {
  	if(key==a[i])
  	{
  	  key=a[i];
  	  printf("Key element %d is found at position %d\n",key,i+1);
  	  exit(0);
	}
  }
  printf("Key element %d is not found\n",key);
  
  return 0;
}
