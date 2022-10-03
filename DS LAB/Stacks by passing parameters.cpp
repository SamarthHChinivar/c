//Stacks by passing parameters

#include <stdio.h>
#include <stdlib.h>

#define  size 5

void push(int s[],int *top,int item)
{  
  if((*top)==size-1)
  printf("Stack Overflow \n");
  else
  s[++(*top)]=item ; // push operation
}

int pop(int s[],int *top)
{ 
  if((*top)==-1)
  	return 0;
  else  
  	return s[(*top)--] ; //pop operation
}

void display(int s[],int top)
{
  int i;
  
  if(top==-1)
  printf("Stack is empty \n");
  else
  {
    printf("Contents of Stack are :-\n");
	for(i=0;i<=top;i++)
    printf("%d ",s[i]);
  }
  printf("\n");
}

int is_palindrome(char str[])
{ 
  int  i;
  char s[10];
  int  top=-1;
  
  for(i=0;str[i]!='\0';i++)
   s[++top]=str[i];
   
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=s[top--])
    return 0;
  }
  return 1;
}

int main()
{
  int  s[20],top,choice,item,flag;
  char str[10];
  
  top=-1;
  
  for(;;)
  {
  	printf("MENU :-\n");
  	printf("1. push  2. pop \n");
  	printf("3. display  4. palindrome \n");
  	printf("5. exit \n");
  	
  	printf("Enter your choice from the MENU :-\n");
  	scanf("%d",&choice);
  	
	switch(choice)
  	{
  	  case 1:
		      printf("Enter the item :-\n");
  	  	      scanf("%d",&item);
  	  	      push(s,&top,item);
  	  	      break;
  	  case 2:
  	  	      item=pop(s,&top);
  	  	      if(item==0)
  	  	      	printf("Stack Underflow \n");
  	  	      else
  	  	      	printf("Item deleted = %d \n",item);
  	  	      break;
  	  case 3:
  	  	      display(s,top);
  	  	      break;
      case 4:
      	      printf("Enter a String :- \n");
      	      scanf("%s",str);
			  flag = is_palindrome(str);
			  if(flag == 0)
			  	printf("%s is not a palindrome \n",str);
			  else
			  	printf("%s is a palindrome \n",str);
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
