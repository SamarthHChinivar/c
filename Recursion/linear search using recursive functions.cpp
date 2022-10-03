//3. linear search using recursion

#include<stdio.h>
void read_array(int a[],int n);
int linear_search(int a[],int n,int key);
int main()
{
  int a[30],n,key,pos;
  printf("Enter the no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter the elements of array :-\n");
  read_array(a,n-1);
  printf("Enter the element to be searched :-\n");
  scanf("%d",&key);
  pos=linear_search(a,n-1,key);
  if(pos==-1)
  printf("Key element %d not found\n",key);
  else
  printf("Key element %d is found at %d position \n",key,pos+1);
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

int linear_search(int a[],int n,int key)
{
  if(n==-1)
  return -1;
  if(key==a[n])
  return n;
  linear_search(a,n-1,key);
}
