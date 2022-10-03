//4. Bubble Sort using pointers

#include<stdio.h>
void bubble_sort(int n,int a[]);
int main()
{
  int i,n,a[30];
  
  printf("Enter no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter %d elements of array :-\n",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",a+i);
  }
  printf("Elements after Sorting :-\n");
  bubble_sort(n,a);
  for(i=0;i<n;i++)
  {
  	printf("%d ",*(a+i));
  }
  return 0;
}

void bubble_sort(int n,int a[])
{
  int i,j,temp;
  
  for(i=0;i<n-1;i++) //no. of passes
  {
  	for(j=0;j<n-1-i;j++) //no. of comparisons
    {
      if(a[j]>a[j+1])
      {
      	temp=a[j];
      	a[j]=a[j+1];
      	a[j+1]=temp;
	  }
	} 
  }
}
