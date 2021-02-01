#include<iostream>

using namespace std;

int add(int,int=0,int=0);

int main(){

int a,b,c;
cout<<"enter the value of a=";

 cin>>a;
 add(a);
 cout<<"sum0 ="<<add(a)<<endl;

 cout<<"enter the value of b=";
 cin>>b;
 add(a,b);
 cout<<"sum1 ="<<add(a,b)<<endl;

 cout<<"enter the value of c=";
 cin>>c;
 add(a,b,c);
 cout<<"sum2 ="<<add(a,b,c);

}
int add(int x,int y,int z){

 return(x+y+z);
 }
