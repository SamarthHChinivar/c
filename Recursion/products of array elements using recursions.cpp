#include<stdio.h>
void read_array(int a[],int n);
int prod_of_n(int a[],int n);
int main()
{
	int n,a[30],prod;
	printf("Enter the elements of array :-\n");
	scanf("%d",&n);
	printf("Enter the elements of array :-\n");
	read_array(a,n-1);
	prod=prod_of_n(a,n-1);
	printf("Productus of array elements is :- %d",prod);
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

int prod_of_n(int a[],int n)
{
  if(n==-1)
  return 1;
  else
  return a[n]*prod_of_n(a,n-1);
}
