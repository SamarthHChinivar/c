 #include <stdio.h>
 #include <math.h>
 int main()
{int i,n;
 float PI=3.1428,degree,term,x,sum;
 printf(" Enter the value of n:-\n");
 scanf("%d",&n);
 printf(" Enter the value of degrees :-\n");
 scanf("%f",&degree);
 x=degree*(PI/180);
 term=x;
 sum=term;
 for(i=3;i<=n;i=i+2)
{term=(-term*x*x)/(i*(i-1));
 sum=sum+term;
}
 printf("\n sin(%f)= %f",degree,sum);
 printf("\n After using the library function :-");
 printf("\n sin(%f)=%f",degree,sin(x));
 return 0;
}
