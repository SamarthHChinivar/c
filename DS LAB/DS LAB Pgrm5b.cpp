//DS Lab Pgrm 5b

#include <stdio.h>
#include <math.h>

void tower_of_hanoi(int n,char s,char t,char d)
{
  if(n==0)
  	return;
  	
  tower_of_hanoi(n-1,s,d,t);
  
  printf("Move disc %d from %c to %c \n",n,s,d);
  
  tower_of_hanoi(n-1,t,s,d);
}

int main()
{
  int n,moves;
  
  printf("Enter the no. of Discs :-\n");
  scanf("%d",&n);
  
  moves = pow(2,n)-1;
  printf("No. of moves are = %d \n",moves);
  
  tower_of_hanoi(n,'A','B','C');
  
  return 0;
}
