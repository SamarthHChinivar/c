 #include<stdio.h>
 void addsub()
{int x,y,sum,sub;
 printf("\n Enter any 2 Numbers:- ");
 scanf("%d%d",&x,&y);
 sum=x+y;
 sub=x-y;
 printf("\n The Sum of %d and %d is %d",x,y,sum);
 printf("\n The Subtraction of %d and %d is %d",x,y,sub);
 return;
}
 int main()
{addsub();
 addsub();
 addsub();
 return 0;
}
