#include <stdio.h>
#include <stdlib.h>

struct node
{
  int          info;
  struct node *llink;
  struct node *rlink;
}; 
 
typedef struct node * NODE;

NODE insert_item(NODE root,int item)
{
  NODE temp,prev,cur;
  
  temp = (NODE)malloc(sizeof(struct node));
  temp->info = item;
  temp->llink = temp->rlink = NULL;
  
  if(root == NULL)
  	return temp;
 
  cur = root;
  
  while(cur != NULL)
  {
  	prev = cur;
  	
  	if(cur->info > item)
  		cur = cur->llink;
  	else
  		cur = cur->rlink;
  }
  
  if(prev->info > item)
  	prev->llink = temp;
  else
  	prev->rlink = temp; 
  	
  return root;
}

void preorder(NODE root)
{
  if(root == NULL) 
  	return;
  	
  printf("%d\t",root->info); // N (accessing the node)
  preorder(root->llink);     // L (left  traversal)
  preorder(root->rlink);     // R (Right traversal)  
}

void inorder(NODE root)
{
  if(root == NULL) 
  	return;
	  	
  inorder(root->llink);       //L
  printf("%d\t",root->info); //N
  inorder(root->rlink);       //R 
}

void postorder(NODE root)
{
	if(root == NULL) 
  	return;
  	
	postorder(root->llink);    //L
	postorder(root->rlink);    //R
	printf("%d\t",root->info); //N
}

void main()
{
  NODE root;
  int  choice,item;
  
  root = NULL;

  for(;;)
  {
  	printf("MENU:\n");
  	printf("1. insert  2. preorder \n");
  	printf("3. inorder 4. postorder \n");
  	printf("5. exit \n");
  	
  	printf("Enter your choice: \n");
  	scanf("%d",&choice);
  	
  	switch(choice)
  	{
  	  case 1:
  	  	      printf("Enter item:\n");
  	  	      scanf("%d",&item);
  	  	      
  	  	      root = insert_item(root,item);
  	  	      
  	  	      break;
  	  	      
  	  case 2:
  	  	      if(root == NULL)
  	  	      {
			    printf("Tree is empty \n");
			    break;
			  } 
			  
			  printf("Preorder traversal of tree is : \n");
			  preorder(root);
			  printf("\n");
			  
			  break;
			  
	  case 3:
	  	      if(root == NULL)
  	  	      {
				printf("Tree is empty \n");
				break;
			  }
			  
			  printf("Inorder traversal of tree is : \n");
			  inorder(root);
			  printf("\n");
			  
			  break;
			  
	  case 4:
	  	      if(root == NULL)
	  	      {
			    printf("Tree is empty \n");
			    break;
			  }
			  
			  printf("Postorder traversal of tree is : \n");
			  postorder(root);
			  printf("\n");
			  
			  break;
			  
	  case 5:
	  	      exit(0);
	  	      
	  default:
	  	      printf("Invalid choice \n");
	  	      exit(0);
	}
  }
}
