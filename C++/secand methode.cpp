#include <bits/stdc++.h>
using namespace std;

double f(double x){

 double p=pow(x,4) + pow(x,2);
 return p;
}

double secant(double x0, double x1){
int n =2;
double x;
int Max_Iter=100;
double e=0.001;


while( (fabs( x1) > e) && ( n <= Max_Iter)){

 x=x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));
 x0=x1;
 x1=x;
 n++;

 }
cout<<"total number iteration"<<n<< endl;
cout<<" Root of the given equation is " << x;
}

int main(){
int x0,x1;  //x1>x0 hobe must be;
cout <<"Enter first initial approximation: ";
cin >>x0;
cout <<"Enter second initial approximation: ";
cin >>x1;
secant( x0,x1);
return 0;
}
