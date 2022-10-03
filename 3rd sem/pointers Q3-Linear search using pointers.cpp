//3. Linear search using pointers

#include<stdio.h>
int linear_search(int n,int a[],int key);
int main()
{
  int i,a[30],n,key,pos;
  
  printf("Enter no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter %d elements of array:-\n",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",a+i);
  }
  printf("Enter the element to be searched :-\n");
  scanf("%d",&key);
  pos=linear_search(n,a,key);
  if(pos==-1)
  printf("Key element %d was not found \n",key);
  else
  printf("Key element %d was found at position %d \n",key,pos+1);
  return 0;
}

int linear_search(int n,int a[],int key)
{
  int i;
  
  for(i=0;i<n;i++)
  {
  	if(key== *(a+i))
  	{
  	  key=*(a+i);
  	  return i;
	}
  }
  return -1;
}
