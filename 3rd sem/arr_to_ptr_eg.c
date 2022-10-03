#include<stdio.h> 
  
int main() 
{ 
  int i;
     
  int arr[5] = {1,2,3,4,5};
  int *ptr = arr; 
  
  for(i=0;i<5;i++)
  	printf("%p\n", ptr[i]); 
  return 0; 
}
