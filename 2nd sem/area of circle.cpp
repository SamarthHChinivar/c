#include<stdio.h>
float area(float r);
int main()
{
 float r,res;
 printf("Enter the radius of the circle :- \n");
 scanf("%f",&r);
 area(r);
 res=area(r);
 printf("Area of the Circle is :- %f \n",res);
 return 0;
}
 
float area(float r)
{float ar;
 ar=3.1428*r*r;
 return ar; 
}
