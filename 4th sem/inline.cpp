#include <iostream>
using namespace std;

inline double cube(double x) {return x*x*x;}

int main()
{
double x;
x= cube (2);
x = cube (4);

cout<<x;

return 0;
}

