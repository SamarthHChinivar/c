//DS Lab Pgrm 5a

#include <stdio.h>
#include <math.h>

double evaluate(char postfix[])
{
  double s[20],op1,op2;
  char   symbol;
  int    top,i;
  
  top=-1;
   
  for(i=0;postfix[i]!='\0';i++)
  {
    symbol=postfix[i];
    
    switch(symbol)
    {
      case '+':
      	        op2=s[top--];
				op1=s[top--];
				s[++top]=op1+op2;
				break;
				
      case '-':
	            op2=s[top--];
				op1=s[top--];
				s[++top]=op1-op2;
				break;
	  case '*':
	            op2=s[top--];
				op1=s[top--];
				s[++top]=op1*op2;
				break;
	  case '/':
	  	        op2=s[top--];
	  	        op1=s[top--];
	  	        s[++top]=op1/op2;
	  	        break;
	  case '^':
	  case '$':
	  	        op2=s[top--];
	  	        op1=s[top--];
	  	        s[++top]=pow(op1,op2);
	  	        break;
	  default:
	  	        s[++top]=symbol-'0'; 
	}
  }
  return s[top--];
}

int main()
{
  char   postfix[20];
  double res;
  
  printf("Enter a Postfix Expression :-\n");
  scanf("%s",postfix);
  
  res=evaluate(postfix);
  
  printf("Evaluation of the Postfix Expression is : %lf \n",res);
  
  return 0;
}
