//DS Lab Pgrm 4

#include <stdio.h>

int F(char symbol)
{
  switch(symbol)
  {
    case '+':
    case '-': return 2;
    
    case '*':
    case '/': return 4;
    
    case '$':
    case '^': return 5;
    
    case '(': return 0;
    
    case '#': return-1;
    
    default:  return 8;	      
  }
}

int G(char symbol)
{
  switch(symbol)
  {
  	case '+':
  	case '-': return 1;
  	
  	case '*':
  	case '/': return 4;
  	
  	case '$':
  	case '^': return 6;
  	
  	case '(': return 9;
  	case ')': return 0;
  	
  	default:  return 7;
  }
}

void convert_infix_postfix(char infix[],char postfix[])
{
  int  j,i,top;
  char s[20],symbol;
  
  top = -1;
  s[++top] = '#';
  
  for(i=j=0;infix[i]!='\0';i++)
  {
  	symbol = infix[i];
  	
  	while(F(s[top])>G(symbol))
    	postfix[j++] = s[top--];
    if(F(s[top])!=G(symbol))
    	s[++top] = symbol;
    else
    	s[top--];
  }
  
  while(s[top] != '#')
  	postfix[j++] = s[top--];
  
  postfix[j] = '\0';
}

int main()
{
  char infix[20],postfix[20];
  
  printf("Enter Infix Expression :-\n");
  scanf("%s",infix);
  
  convert_infix_postfix(infix,postfix);
  
  printf("Postfix Expression is :- %s \n",postfix);
  
  return 0;
}
