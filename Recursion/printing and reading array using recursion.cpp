/*2. printing array in forward order
    using recursion*/

#include<stdio.h>
void display_array(int a[],int n);
void read_array(int a[],int n);
int main()
{
  int a[30],n;
  printf("Enter the no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter the elements of array:-\n");
  read_array(a,n-1);
  printf("Array elements are :-\n");
  display_array(a,n-1);
  return 0;
}

void read_array(int a[],int n)
{
  if(n==-1)
  return;
  else
  {
    read_array(a,n-1);
    scanf("%d",&a[n]);
  }
}

void display_array(int a[],int n)
{
  if(n==-1)
  return;
  else
  {
  	display_array(a,n-1);
  	printf("%d ",a[n]);
  } 
}
