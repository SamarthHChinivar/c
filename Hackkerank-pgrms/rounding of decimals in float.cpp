#include<stdio.h>
int main()
{ float a,b,c,d;
  printf("Enter any 4 float numbers :-\n");
  scanf("%f%f%f%f",&a,&b,&c,&d);
  
  printf("Rounding upto 4 decimals places and printing values of a and b:-\n");
  printf("%.4f , %.4f\n",a,b);
  
  printf("Rounding upto 2 decimals places and printing value of c:-\n");
  printf("%.2f \n",c);
  
  printf("Rounding upto only 1 decimal place and printing value of d:-\n");
  printf("%.1f \n",d);
  
  return 0;
}
