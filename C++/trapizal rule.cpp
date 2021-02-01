#include <iostream>
using namespace std;
double tripizal(double a, double b, int n);

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

  f = tripizal(a,b,n); // Integral

  // Result
  cout<<"Integral = \n"<<endl<<f;

  return 0;
}

double tripizal(double a, double b, int n)
{
  double sum=0;
  double h = (b - a) / n; // finding h base length

  // summation of all sums
  for (int i = 1; i < n; i++) {

      sum += 2*fk(a+i*h);     // y1=a+h,y2=a+2h,y3=a+3h,yn=a+nh;
      }

  // counting of integral
  double result = h / 3 * (fk(a) + sum+ fk(b));
  return result;
}

double fk(double x) ///differential equation
{
  return x * x;
}
