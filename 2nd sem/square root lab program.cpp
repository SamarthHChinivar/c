# include <stdio.h>
# include <math.h>
int main()
{float x=1,n,root,r;
 int i;
printf("\n Enter the value of n :- ");
scanf("%f",&n);
for(i=1;i<=6;i++)
{root=(((x*x)+n)/(2*x));
x=root;
}
printf("\n Square root of %f is %f",n,root);
r=(float)sqrt(n);
printf("\n r= %f",r);
return 0;
}
