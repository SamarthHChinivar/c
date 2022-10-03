#include<stdio.h>
void insert(int a[],int n,int ITEM,int POS);
int main()
{
  int a[30],n,ITEM,POS,i;
  printf("Enter the no. of elements :-\n");
  scanf("%d",&n);
  printf("Enter the %d elements of array :-\n",n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("Enter the ITEM to be inserted :-\n");
  scanf("%d",&ITEM);
  printf("Enter the position of ITEM to be inserted :-\n");
  scanf("%d",&POS);
  if(POS>=n+1 || POS<=0 )
  printf("Invalid position \n");
  else
  {
    insert(a,n,ITEM,POS);
    printf("Resultant array is :-\n");
    for(i=0;i<=n;i++)
    {
  	 printf("%d\t",a[i]);
    }
  }
  return 0;
}

void insert(int a[],int n,int ITEM,int POS)
{
  int i;
  for(i=n-1;i>=POS-1;i--)
  {
   a[i+1]=a[i];
  }
  a[POS-1]=ITEM;
}
