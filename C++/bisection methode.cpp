//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define root 0.01

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2 + 2

double func(double x)
{
	return x*x*x - x*x + 2; ///a*a*a-a*a+2,b*b*b-b*b+2;
}

// Prints root of func(x) with error of EPSILON
void bisection(double a, double b)
{
                                    ///fubc call and value pass a and b and equation value test result  return;
	if (func(a) * func(b) >= 0)/// if result zero cheye big hole new  value dite hobe main theke a and b;
	{
		cout << "You have not assumed curret a and b\n";

	}

	double c ;
	while ((b-a) >= root)
	{
		// Find middle point
		c = (a+b)/2;


     if (func(c) == 0.0)/// Check if middle point zero it is root
         break;

		// Decide the side to repeat the steps
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	cout << "The value of root is : " << c;
}

// Driver program to test above function
int main()
{
	// Initial values assumed
	double a =-200, b = 300;
	bisection(-200,300);
	return 0;
}
