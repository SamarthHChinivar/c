#include<stdio.h>
int main()
{int i,j,x=1;
for(i=1;i<=4;i++)
{for(j=4;j>=i;j--)
{printf("%d",i++);
}
printf("\n");
x=1;
}
return 0;
}
