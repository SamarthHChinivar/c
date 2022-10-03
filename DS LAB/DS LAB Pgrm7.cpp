#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
  char usn[11];
  char name[11];
  char branch[5];
  int  sem;
  char phone_no[11];
}STUDENT;

struct node
{
  STUDENT      info;
  struct node *link;
};

typedef struct node* NODE;

void read(STUDENT *item)
{
  pritnf("Enter student details :- \n");
  printf("USN: ");
  scanf(" %s",item->usn);
  printf("name: ");
  scanf(" %s",item->name);
  printf("branch: ");
  scanf(" %s",item->branch);
  printf("sem: ");
  scanf("%d",&(item->sem));
  printf("phone no: ");
  scanf(" %s",item->phone_no);
}

NODE insert_front(NODE first,STUDENT item)
{
  NODE temp;
  
  temp = (NODE)malloc(sizeof(struct node));
  temp->info = item;
  temp->link = first;
  
  return temp;
}

NODE insert_rear(NODE first, STUDENT item)
{
  NODE temp,cur;
  
  temp = (NODE)malloc(sizeof(struct node));
  temp->info = item;
  temp->link = NULL;
  
  if(first == NULL)
  	return temp;
  	
  cur = first;
  while (cur->link != NULL)
  	cur = cur->link;
  
  cur->link = temp;
  
  return first;
}

NODE delete_front(NODE first,STUDENT item)
{
  NODE second;
  
  if(first == NULL)
  {
    printf("Student list is empty \n"); 
    return NULL;
  }
  
  if(first->link == NULL)
  {
  	printf("Student %s details are deleted \n",first->info.name);
  	free(first);
  	
  	return NULL;
  }
  
  second = first->link;
  
  printf("Student %s details are delted \n",first->info.name);
  free(first);
  
  return second;
}

NODE delete_rear(NODE first,STUDENT item)
{
  NODE prev,cur;
  
  if(first == NULL)
  {
    printf("Student list is empty \n"); 
    return NULL;
  }
  
  if(first->link == NULL)
  {
  	printf("Student %s details are deleted \n",first->info.name);
  	free(first);
  	
  	return NULL;
  }
  
  cur = first;
  while(cur->link != NULL)
  {
  	prev = cur;
  	cur = cur->link;
  }
  
  printf("Student details %s are deleted \n",cur->info.name);
  free(cur);
  
  prev->link = NULL;
  
  return first;
}

int count(NODE first)
{
  int  count;
  NODE cur;
  
  count = 0;
  
  if(first == NULL)
  	return 0;
  	
  cur = first;
  while(cur != NULL)
  {
  	cur = cur->link;
  	count++;
  }
  
  return count;
}

void display()
{
  NODE cur;
  
  if(first == NULL)
  {
  	printf("Student list is empty \n");
  	return;
  }
  
  cur = first;
  
  printf("Student details are :- \n");
  
  while(cur != NULL)
  {
  	printf("USN:%s\n name:%s\n branch:%s\n sem:%d\n phone no:%s\n",cur->info.usn,cur->info.name,
	       cur->info.branch,cur->info.sem,cur->info.phone_no);
    
    cur = cur->link;
  }
  
  printf("\n");
}

int main()
{
	
}
