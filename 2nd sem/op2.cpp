 #include<stdio.h>
 #include "stdlib.h"
   int main()
 {int *p,A[5]={1,2,3,4,5};
  p=(int *)malloc(5*sizeof(int));//allocating syntax line in C
  printf("The array is :- ");
  for(int i=0;i<5;i++)
{ printf("%d\t",A[i]);}
  return 0;
}
