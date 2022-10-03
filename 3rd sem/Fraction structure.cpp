#include<stdio.h>
typedef struct
{
  int nr;
  int dr;
}FRACTION;

int main()
{
  FRACTION a,b,c;
  printf("Enter fraction-1 (nr./dr.):-\n");
  scanf("%d/%d",&a.nr,&a.dr);
  printf("Enter fraction-2 (nr./dr.):-\n");
  scanf("%d/%d",&b.nr,&b.dr);
  c.nr=a.nr*b.nr;
  c.dr=a.dr*b.dr;
  printf("Result is %d/%d \n",c.nr,c.dr);
  return 0;
}
