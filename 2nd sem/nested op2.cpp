 #include<stdio.h>
 int main()
{int i,j,n;
 printf("Enter value of n:- ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{printf("\n");
 for(j=1;j<=i;++j)
{printf("%d\t",j);
}
}
 return 0;
}
