#include <stdio.h>
#include <string.h>

int F(char symbol)
{
  switch(symbol)
  {
    case '+':
    case '-': return 1;
    
    case '*':
    case '/': return 3;
    
    case '$':
    case '^': return 6;
    
    case ')': return 0;
    
    case '#': return-1;
    
    default:  return 8;
  }
}

int G(char symbol)
{
  switch(symbol)
  {
    case '+':
    case '-': return 2;
    
    case '$':
    case '^': return 5;
    
    case '(': return 0;
    case ')': return 9;
    
    default:  return 7;
  }
}

void convert_infix_prefix(char infix[],char prefix[])
{
  char s[20],symbol;
  int  i,j,top;
  
  top=-1;
  s[++top]='#';
  
  strrev(infix);
  
  for(i=j=0;infix[i]!='\0';i++)
  {
    symbol=infix[i];
    
    while(F(s[top])>G(symbol))
    	prefix[j++]=s[top--];
    if(F(s[top])!=G(symbol))
    	s[++top]=symbol;
    else
    	s[top--];
  }
  
  while(s[top]!='#')
  	prefix[j++]=s[top--];
  	
  prefix[j]='\0';
  
  strrev(prefix);	
}

int main()
{
  char infix[20],prefix[20];
  
  printf("Enter the Infix Expression :-\n");
  scanf("%s",infix);
  
  convert_infix_prefix(infix,prefix);
  
  printf("Prefix Expression is :- %s \n",prefix);
  
  return 0;
}
