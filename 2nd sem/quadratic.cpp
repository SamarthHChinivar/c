#include<stdio.h>
#include<math.h>
int main()
{float x1,x2,a,b,c,d,rp,ip;
printf("Enter the co-efficents of quadratic eq :- ");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
{x1=x2=(-b)/(2*a);
printf("\n x1=%f and x2=%f",x1,x2);
}
else if(d>0)
{x1=(-b+sqrt(d))/(2*a);
 x2=(-b-sqrt(d))/(2*a);
 printf("\n x1=%f and x2=%f",x1,x2);
}
else if(d<0)
{rp=(-b)/(2*a);
 ip=(sqrt(-d))/(2*a);
 printf("\n x1=%f+%fi and x2=%f-%fi",rp,ip,rp,ip);
}
else
{printf("invalid eq or wrong selection of co-efficients");
}
return 0;
}
