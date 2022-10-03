// DS Lab Pgrm 6

#include <stdio.h>
#include <stdlib.h>

#define size 5

void insert_rear(char item,char q[],int *count,int *rear)
{
  if(*count == size)
  	printf("Queue Overflow \n");
  else
  {
    *rear = (*rear+1)%size;
	q[*rear] = item;
	
    (*count)++;
  }
}

char delete_front(char item,char q[],int *count,int *front)
{
  item = q[*front];
  *front = (*front+1)%size;
  
  (*count)--;
  
  return item;
}

void display(char q[],int *count,int front)
{
  int i;
  
  if(*count == 0)
  	printf("Queue is Empty \n");
  else
  {
  	printf("Contents of Queue are :-\n");
	for(i=1;i<= *count;i++)
  	{
	  printf("%c ",q[front]);
	  front = (front+1)%size;
    }
    printf("\n");
  }
}

int main()
{
  int  choice,count,front,rear;
  char item,q[20];
  
  count = 0;
  front = 0;
  rear = -1;
  
  for(;;)
  {
  	printf("MENU:-\n");
  	printf("1. Insertion from rear end  2. Deletion from front end \n");
  	printf("3. Display                  4.Exit \n");
  	
	printf("Enter your choice :-\n");
  	scanf("%d",&choice);
  	
  	switch(choice)
  	{
  	  case 1:
  	  	      printf("Enter an Item :-\n");
  	  	      scanf(" %c",&item);
  	  	      
  	  	      insert_rear(item,q,&count,&rear);
  	  	      break;
  	  	      
  	  case 2:
			  
			  if(count == 0)
  	          	printf("Queue Underflow \n");
			  else
			  {
			    item = delete_front(item,q,&count,&front);
			    
				printf("Item Deleted = %c \n",item);
			  }	
  	  	      break;
  	  	      
  	  case 3:
  	  	      display(q,&count,front);
  	  	      break;
  	  	      
  	  case 4:
  	  	      exit(0);
  	  	      
  	  default:
  	  	      printf("Invalid Choice \n");
			  exit(0);      
	}
  }
  return 0;
}
