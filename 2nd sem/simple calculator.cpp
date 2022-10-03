#include <stdio.h>
#include <stdlib.h>
/*Simple Calculator*/
int main() 
{int a,b,r,op;
printf ("Enter any two integer numbers ");
scanf("%d%d",&a,&b);
printf("\n Select the no.in menu for the required operation");
printf("\n Menu:-\n 1.Addition:-\n 2.Subtraction:-\n 3.Multiplication:-\n 4.Division:-");
scanf("%d",&op);
switch(op)
{case 1:r=a+b;
 break;
 case 2:r=a-b;
 break;
 case 3:r=a*b;
 break;
 case 4:if(b!=0)
      {r=a/b;
break;
}
 else 
{printf("\n invalid operant or zero is entered");
exit(0);
}
default: printf("\n Invalid selection of operator");
}
printf("\n The Result is %d",r);
    return 0;
}
