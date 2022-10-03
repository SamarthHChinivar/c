//calculator using function

#include<stdio.h>
#include<stdlib.h>

void calculator(int a,int b,char op);

int main()
{
  int  a,b; 
  char op;
  printf(" Enter any 2 no. :- ");
  scanf("%d%d",&a,&b);
  printf("\n Valid operators here are :- '+','-','*','/' ");
  printf("\n Enter any valid operator(reffering above) :- ");
  scanf(" %c",&op);/*for charecters and strings, keybord buffers should be considered
  so a space is included*/
  calculator(a,b,op);
  return 0;
}
 
void calculator(int a,int b,char op)
{
  int r;
  switch(op)
  {
   case'+':r=a+b;
   break;
   case'-':r=a-b;
   break;
   case'*':r=a*b;
   break;
   case'/':if(b==0)
   {
    printf("\n Invalid denominator");
    exit(0);
   }
   else
   r=a/b;
   break;
   default:printf("\n Invalid operator");
   exit(0);
  }
  printf("\nResult is :- %d",r);
}
