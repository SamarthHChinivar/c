#include <stdio.h>
#include <stdlib.h>

/*for implementing stacks using linked lists,use insert front & delete front OR insert rear & delete rear */

/*for implementing queues using linked lists,use insert rear & delete front*/

/*use all 4 functions here for implementing double ended queue (DEQUEUE)
using linked lists*/

struct node
{
  int          info;
  struct node *link;
};

typedef struct node* NODE;

// insertion of element at front end
NODE insert_front(NODE first,int item)
{
  NODE temp;
  
  temp=(NODE)malloc(sizeof(struct node));
  temp->info=item;
  temp->link=first;
  
  return temp;
}

//inserting an element at rear end
NODE insert_rear(NODE first,int item)
{
  NODE cur,temp;
  
  temp=(NODE)malloc(sizeof(struct node));
  temp->info=item;
  temp->link=NULL;
  
  //inserting first element
  if(first == NULL)
  	return temp;
  
  //inserting an element in an existing list
  
  //finding address of last node
  cur=first;
  
  while(cur->link != NULL)
  	cur=cur->link;
  
  cur->link=temp;
  
  return first;
}

//deleting an item at front end 
NODE delete_front(NODE first)
{
  NODE second;
  
  //if list is empty
  if(first == NULL)
  {
    printf("List is empty \n");
    return NULL;
  }
  
  //deleting an element if one element exists
  if(first->link == NULL)
  {
    printf("Item deleted = %d \n",first->info); 
    free(first);
    return NULL;
  }
  
  //deleting an element in an existing list
  second=first->link;
  
  printf("Item Deleted = %d \n",first->info);
  free(first);
  
  return second;
}

//deleting an element at rear end
NODE delete_rear(NODE first)
{
  NODE cur,prev;
  //if list is empty
  if(first == NULL)
  {
    printf("List is empty \n");
    return NULL;
  }
  
  //deleting an element if one element exists
  if(first->link == NULL)
  {
    printf("Item deleted = %d \n",first->info);
    free(first);
    return NULL; 
  }
  
  //deleting an element in an existing list
  
  //finding address of last and last but 1 element
  cur=first;
  
  while(cur->link!=NULL)
  {
    prev=cur;
    cur=cur->link;
  }
   
  printf("Item deleted = %d \n",cur->info);
  free(cur);
  
  prev->link=NULL;
  
  return first; 
}

//displaying the elements of the list
void display(NODE first)
{
  NODE cur;
  
  if(first == NULL)
  {
    printf("List is empty \n");
    return;
  }
  
  printf("Contents of the List are :- \n");
  cur=first;
  
  while(cur!=NULL)
  {
    printf("%d \t",cur->info);
    cur=cur->link;
  }
  printf("\n");
} 

int main()
{
  int  item,choice;
  NODE first;
  
  first=NULL;
  
  for(;;)
  {
    printf("MENU :- \n");
    printf("1.insert front  2.insert rear \n");
    printf("3.delete front  4.delete rear \n");
    printf("5.display       6.exit \n");
    
    printf("Enter your choice from above MENU :- \n");
    scanf("%d",&choice);
    
    switch(choice)
    {
      case 1:
              printf("Enter item :- \n");
              scanf("%d",&item);
              first=insert_front(first,item);
              break;
              
      case 2:
              printf("Enter item :- \n");
              scanf("%d",&item);
              first=insert_rear(first,item);
              break;
              
      case 3:
              first=delete_front(first);
              break;
              
      case 4:
              first=delete_rear(first);
              break;
              
      case 5:
              display(first);
              break;
              
      case 6:
              exit(0);
              
      default:
              printf("Invalid choice \n");
              exit(0);  
    }
    
  }
  return 0;
}
