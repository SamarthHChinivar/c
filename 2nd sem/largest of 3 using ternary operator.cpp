 //largest no. in 3 no.s using ternary operator 
 #include<stdio.h>
 int main()
{int a,b,c,max;
 printf("Enter any 3 numbers :- ");
 scanf("%d%d%d",&a,&b,&c);
 max=(a>b)?(a>c?a:c):(b>c?b:c);
 printf("\nLargest number is %d",max);
 return 0;
}
