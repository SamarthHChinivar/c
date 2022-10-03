 #include<stdio.h>
 #include<stdlib.h>
 int main()
{int n,i,a[30],mid,low,high,key;
 printf("Enter the no. of elements:- ");
 scanf("%d",&n);
 printf("\nEnter the elements of array a :- ");
 for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
 printf("\nEnter the key element:- ");
 scanf("%d",&key);
 low=0;
 high=n-1;
 while(low<=high)
{mid=(low+high)/2;
 if(a[mid]==key)
{a[mid]=key;
 printf("\nKey element %d is found at position %d",a[mid],mid+1);
 exit(0);
}
 if(key<a[mid])
{high=mid-1;}
 else
{low=mid+1;}
}
 printf("\nThe key element is not found ");
 return 0;
}
