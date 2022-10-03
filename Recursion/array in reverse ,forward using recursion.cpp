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
  printf("\n");
  printf("Printing the elements of array in forward order :-\n");
  display_forward(a,n);
  printf("\n");
  
  return 0;
}

void read_array(int a[],int n)
{
  if(n==-1)
  	return;
  
  read_array(a,n-1);
  scanf("%d",&a[n]);
}

void display_reverse(int a[],int n)
{
  if(n==-1)
  return;
  else
  {
    printf("%d ",a[n]);
    display_reverse(a,n-1);
  }
}

void display_forward(int a[],int n)
{
  if(n==-1)
  return;
  else
  {
    display_forward(a,n-1);
	printf("%d ",a[n]);
  }
}
