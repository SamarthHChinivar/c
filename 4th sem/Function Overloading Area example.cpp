// Function Overloading example of C++
// Area of circle, rectangle, triangle using Function Overloading

#include <iostream>
#include <stdlib.h>
using namespace std;

void area(float r)
{
  cout<<"Area of Circle = "<<3.1428 * r * r<<endl;
}

void area(int l,int b)
{
  cout<<"Area of Rectangle = "<<l * b<<endl;
}

void area(float bs,float h)
{
  cout<<"Area of Triangle = "<<0.5 * bs * h<<endl;
}

int main()
{
  int   l,b,choice;
  float r,bs,h;
  
  for(;;)
  {
  	cout<<"MENU:\n";
  	cout<<"1. Area of Circle \n";
  	cout<<"2. Area of Rectangle \n";
  	cout<<"3. Area of Triangle \n";
  	cout<<"4. Exit \n";
  	
  	cout<<"Enter the Suitable number for suitable operation \n";
  	cin>>choice;
  	
  	switch(choice)
  	{
  	  case 1: 
  	          cout<<"Enter Radius of the Circle :\n";
  	          cin>>r;
  	          area(r);
  	          
  	          break;
  	          
  	  case 2:
		      cout<<"Enter Length and Breadth of the Rectangle: \n";
		      cin>>l>>b;
		      area(l,b);
		      
		      break;
		      
	  case 3:
	  	      cout<<"Enter Base and Height of Triangle: \n";
	  	      cin>>bs>>h;
	  	      area(bs,h);
	  	      
	  	      break;
	  	      
	  default:exit(0);
	}
  }
  
  return 0;
} 
