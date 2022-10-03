#include <stdio.h>
#include <stdlib.h>

void create_array(int a[],int n)
{ 
  int i;
  
  if(n == 0)
  {
    printf("Array is not created \n");
    return;
  }
  
  printf("Enter %d elements :-\n",n);
  for(i=0;i<n;i++)
  	scanf("%d", &a[i]);
}

void display(int a[],int n)
{ 
  int i;
  
  if(n == 0)
  {
    printf("There is no elements in array \n");
    return;
  }

  printf("Array Elements are :- \n");
  for(i=0;i<n;i++)
  	printf("%d\t", a[i]);
  
  printf("\n");
}

int insertion(int a[],int n,int item,int index)
{
  int i;
  
  for(i=n-1;i>=index-1;i--)
  	a[i+1] = a[i];
  	
  a[index-1] = item;
  
  return n+1 ; 
}

int deletion(int a[],int n,int index)
{
  int i;
  
  for(i=index-1;i<n-1;i++)
  	a[i]=a[i+1];
  	
  return n-1 ;
}

int main()
{
  int n,item,index,a[30],choice;
  
  n = 0;
  
  for(;;)
  {
  	printf("MENU:- \n");
  	printf("1.Create Array  2.Display Array \n");
  	printf("3.Insertion     4.Deletion \n");
  	printf("5. Exit \n");
  	
  	printf("Enter the choice :-\n");
  	scanf("%d",&choice);
  	
  	switch(choice)
  	{
  	  case 1:
  	  	      printf("Enter the no. of elements of array:-\n");
  	  	      scanf("%d", &n);
  	  	      create_array(a,n);
  	  	      
  	  	      break;
  	  
  	  case 2:
		      display(a,n);
  	  	      break;
  	  	
  	  case 3:
		      printf("Enter the item to be inserted :-\n");
		      scanf("%d",&item);
		      printf("Enter the index of item to be inserted :-\n");
		      scanf("%d",&index);
		
		      if(index<=0 || index>=n+1 || n==0)
		      	printf("Invalid Index \n");
		      else
		      	n = insertion(a,n,item,index);
		
		      break;
		
	  case 4:
	  	      printf("Enter the index to be deleted :-\n");
		      scanf("%d",&index);
		
		      if(index<=0 || index>=n+1 || n==0)
		      	printf("Invalid Index \n");
		      else
		      	 n = deletion(a,n,index);
		
		      break;
	  
	  case 5:
	          exit(0);
		
	  default:
	          printf("Invalid Choice \n");
	          exit(0);
    }
  }
  return 0;
}
