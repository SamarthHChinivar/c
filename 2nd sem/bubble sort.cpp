#include<stdio.h>
void bubble(int a[],int n)
{
 int i,j,temp;
 for(i=0;i<n-1;i++) //no of passes, not no. of rows
 {for(j=0;j<n-1-i;j++) // no of comparisons , not no. of columns 
  {if(a[j]>a[j+1]) // comparing
   {temp=a[j]; //swapping
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}
 int main()
{
 int n,a[20],i;
 printf("enter the no. of elements\n");
 scanf("%d",&n);
 printf("enter the list of elements\n");
 for(i=0;i<n;i++)
 scanf("%d", &a[i]);
 bubble(a,n);
 printf("the elements are after sorting\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 return 0;
}
