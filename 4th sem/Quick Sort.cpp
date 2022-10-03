#include <iostream>
using namespace std;

void exchange(int x, int y)
{
  int temp;
  
  temp = x;
  x = y;
  y = temp;
}

int partition(int a[], int low, int high)
{
  int i,j,key;
  
  key = a[low];
  i = low;
  j = high + 1;
  
  while(i <= j)
  {
  	do
  	{
  	  i++;
	} while(key > a[i]);
	
	do
	{
	  j--;
	} while(key < a[j]);
	
	if(i <= j)
		exchange(a[i],a[j]);
  }
  
  exchange(a[low],a[j]);
  
  return j;
}

void Quick_Sort(int a[], int low, int high)
{
  int k;
  
  k = partition(a,low,high);
  Quick_Sort(a,low,k-1);
  Quick_Sort(a,k+1,high);
  
}

int main()
{
  int a[30],n,i;
  
  cout<<"Enter the no. of elements:"<<endl;
  cin>>n;
  
  cout<<"Enter the "<<n<<" Elements of Array:"<<endl;
  for(i=0;i<n;i++)
  	cin>>a[i];
  	
  cout<<"Array Elements before Sorting:"<<endl;
  for(i=0;i<n;i++)
  	cout<<a[i]<<"\t";
  	
   cout<<"\n";
  
  int low = 0;
  int high = n-1;
   
  Quick_Sort(a,low,high);
   
  cout<<"Array Elements after Sorting:"<<endl;
  for(i=0;i<n;i++)
  	cout<<a[i]<<"\t";
  
  cout<<"\n";
  
  return 0;
}
