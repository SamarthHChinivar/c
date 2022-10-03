#include<stdio.h>
void read_array(int a[],int n);
int linear_search(int a[],int n,int key);
int main()
{
  int a[30],n,key,pos;
  printf("Enter the no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter the elements of array :-\n");
  read_array(a,n);
  printf("Enter the element to be searched :-\n");
  scanf("%d",&key);
  pos=linear_search(a,n,key);
  if(pos==-1)
  printf("Key element %d is not found \n",key);
  else
  printf("Key element %d is found at %d\n",key,pos+1);
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

int linear_search(int a[],int n,int key)
{
  int i;
  for(i=0;i<n;i++)
  {
  	if(key==a[i])
  	return i;
  }
  return -1;
}
