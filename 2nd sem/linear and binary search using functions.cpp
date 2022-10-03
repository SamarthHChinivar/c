 #include<stdio.h>
 #include<stdlib.h>
 void linear(int A[],int n,int key);
 void binary(int A[],int n,int key);
 int main()
{int A[30],n,key,i;
 printf("Enter the no. of elements :- ");
 scanf("%d",&n);
 printf("\nEnter elements of array :-  ");
 for(i=0;i<n;i++)
{scanf("%d",&A[i]);
}
 printf("\nEnter the key element :- ");
 scanf("%d",&key);
 linear(A,n,key);
 binary(A,n,key);
 return 0;
}
 void linear(int A[],int n,int key)
{int i;
 printf("\nIn linear search :- "); 
 for(i=0;i<n;i++)
{if(A[i]==key)
{A[i]=key;
 printf("\nKey Element %d is found at position %d ",A[i],i+1);
}
}
 printf("\nElement is not found ");
}
 void binary(int A[],int n,int key)
{int mid; 
 int low=0;
 int high=n-1;
 printf("\nIn binary search :- ");
 while(low<=high)
{mid=(low+high)/2;
 if(A[mid]==key)
{A[mid]=key;
 printf("\nKey element %d is found at position %d",A[mid],mid+1);
 exit(0);
}
 if(key<A[mid])
{high=mid-1;}
 else
{low=mid+1;}
}
 printf("\nElement is not found ");
}
