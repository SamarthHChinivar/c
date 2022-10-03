#include<stdio.h>
//type-1
void cube()
{int a,r;
 printf("\n Enter any no. :- ");
 scanf("%d",&a);
 r=a*a*a;
 printf("\n Cube of %d is %d",a,r);
 return;
}
int main()
{
 cube();
 return 0;
}
