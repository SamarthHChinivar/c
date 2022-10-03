//CP Lab Assessment
//Part -B Q.1
//Sqrt Program

 #include <stdio.h>
 int main()
{int i;
 float n,x,root;
 printf(" Enter the value of n: \n");
 scanf("%f",&n); x=1;
 for(i=1;i<=6;i++)
{root=((x*x)+n)/(2*x);
 x=root;
}
 printf("\n Square root of %f is %f",n,root);
 return 0;
}//Program closed
