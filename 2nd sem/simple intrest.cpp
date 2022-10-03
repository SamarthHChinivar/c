#include<stdio.h>
int main()
{
 float p,r,t,si;
 printf("Enter the value of principle , rate , time:- \n");
 scanf("%f%f%f",&p,&r,&t);
 si=(p*r*t)/100;
 printf("Simple Intrest is :- %f \n",si);
 return 0;
}
