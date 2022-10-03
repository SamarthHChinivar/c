#include<stdio.h>
int main()
{int a,b,c;
printf("Enter any 3 numbers :- ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{if(a>c)
{printf("\n %d is greater than %d",a,c);
 printf("\n %d is the greatest no.",a);
}
else
{printf("\n %d is greater than %d",c,a);
printf("\n %d is the greatest no.",c);
}
}
else if(b>a)
{if(b>c)
{printf("\n %d is greater than %d",b,c);
printf("\n %d is the greatest no.",b);
}
else
{printf("\n %d is greater than %d",c,b);
printf("\n %d is the greatest no.",c);
}
}
return 0;
}

