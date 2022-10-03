#include<stdio.h>
int main()
{int i,j;
printf("This Code is demonstrate difference b/w continue and break");
printf("\n Loop with i is used to demonstrate working of break");
printf("\n Loop with j is used to demonstrate working of continue\n");
for(i=1;i<=5;i++)//working of break
{if(i==4)
break;
printf("%d\t",i);//break is used to come out of loop/block
}
printf("\n");
for(j=1;j<=5;j++)//working of continue
{if(j==4)	
continue;
printf("%d\t",j);//continue is used to skip an iteration in Loop
}
return 0;}
