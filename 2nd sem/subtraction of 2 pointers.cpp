 #include "stdio.h"
 int main()
{int a[5]={1,2,3,4,5},*p1,*p2,r;
  p1=&a[1];// for eg 1003
  p2=&a[2];// for eg 1005
 r=p2-p1;//1005-1003=2
 printf("Result is %d",r);
 return 0;
}
