#include <iostream>
using namespace std;
double simpson(double a, double b, int n);

double fk(double x);

int main()
{
  // Database

  double a, b, f;
  int n;

  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  cout<<"n = ";
  cin>>n;

  f = simpson(a,b,n); // Integral

  // Result
  cout<<"Integral = \n"<<endl<<f;

  return 0;
}

double simpson(double a, double b, int n)
{
  double sum_even = 0, sum_odd = 0;
  double h = (b - a) / n; // finding h base length

  // summation of all sums
  for (int i = 1; i < n; i+=2) {

      sum_odd += 4*fk(a+i*h);     // y1=a+h,y3=a+3h,y5=a+5h,yn=a+nh;
      }
  for (int j = 2; j < n; j+=2) {

      sum_even += 2*fk(a+j*h);  // y2=a+2h,y4=a+4h,y6=a+6h,yn=a+nh;

      }

  // counting of integral
  double result = h / 3 * (fk(a) + sum_odd + sum_even + fk(b));
  return result;
}

double fk(double x) ///differential equation
{
  return x * x;
}
