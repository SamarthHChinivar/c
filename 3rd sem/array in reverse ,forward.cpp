#include<stdio.h>

void read_array(int a[],int n);
void display_reverse(int a[],int n);
void display_forward(int a[],int n);

int main()
{ 
  int a[30],n;
  
  printf("Enter the no. of elements of array:-\n");
  scanf(" %d",&n);
  printf("Enter the elements of array :-\n");
  read_array(a,n);
  
  printf("Printing the elements of array in reverse order:-\n");
  display_reverse(a,n);
  printf("Printing the elements of array in forward order :-\n");
  display_forward(a,n);
  
  return 0;
}

void read_array(int a[],int n)
{
  int i;
  
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
}

void display_reverse(int a[],int n)
{
  int i;
  
  for(i=n-1;i>=0;i--)
  {
  	printf("%d ",a[i]);
  }
  printf("\n");
}

void display_forward(int a[],int n)
{
  int i;
  
  for(i=0;i<n;i++)
  {
  	printf("%d ",a[i]);
  }
  printf("\n");
}
