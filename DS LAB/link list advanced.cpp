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
  
  prev->link=NULL;
  
  printf("Item deleted = %d \n",cur->info);
  free(cur);
  
  return first; 
}

//counting the no. of nodes in list
int count_nodes(NODE first)
{
  NODE cur;
  int  count;
  
  count=0;
  
  if(first == NULL)
  	return 0;
  	
  cur=first;
  while(cur!=NULL)
  {
    cur=cur->link;
    count++;
  }
  return count;
}

//seaching in the list,for the given item
int searching(NODE first,int item)
{
  NODE cur;
  int  pos;
  
  if(first == NULL)
  	return 0;
  
  cur=first;
  pos=1;
  
  while(cur!=NULL)
  {
    if(item==cur->info)
    	return pos;
    	 
    cur=cur->link;
    pos++;
  }
  return 0;
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
  int  item,choice,count,pos;
  NODE first;
  
  first=NULL;
  
  for(;;)
  {
    printf("MENU :- \n");
    printf("1.insert front  2.insert rear \n");
    printf("3.delete front  4.delete rear \n");
    printf("5.count         6.searching   \n");
    printf("7.display       8.exit \n");
    
    printf("Enter your choice from above MENU :- \n");
    scanf("%d",&choice);
    
    switch(choice)
    {
      case 1:
              printf("Enter the item to be inserted :- \n");
              scanf("%d",&item);
              
              first=insert_front(first,item);
              break;
              
      case 2:
              printf("Enter the item to be inserted :- \n");
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
              count=count_nodes(first);
              
              printf("No. of Nodes are : %d \n",count);
              break;
              
      case 6:
              printf("Enter the item to be searched :-\n");
              scanf("%d",&item);
              
              pos=searching(first,item);
              
              if(pos==0)
              	printf("Item %d not found \n",item);
              else
              	printf("Item %d found at position %d \n",item,pos);
              
              break;
      case 7:
              display(first);
              break;
              
      case 8:
              exit(0);
              
      default:
              printf("Invalid choice \n");
              exit(0);  
    }
    
  }
  return 0;
}
