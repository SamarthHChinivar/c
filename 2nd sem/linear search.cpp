 # include <stdio.h>
 # include <stdlib.h>
 int main()
{int n,i,a[30],key; 
 printf("\n Enter the number of elements :- ");
 scanf("%d",&n);
 printf("\n Enter the elements of Array :- ");
 for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
 printf("\n Enter the element to be searched :- ");
 scanf("%d",&key);
 for(i=0;i<n;i++)
{if(a[i]==key)
{a[i]=key;
 printf("\n The Element %d is found at position %d ",a[i],i+1);
 exit(0);
}
}
 printf("\n The Element is not found ");
 return 0;
}
