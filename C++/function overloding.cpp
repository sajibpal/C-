#include<iostream>

using namespace std;
int area(int x,int y);
float area(int x,float y);

int main(){

int a,b;
float d;

 cout<<"enter the valur of a and b";
 cin>>a>>b;
 int c=area(a,b);
 cout<<"area sum ="<<c<<endl;

 cout<<"enter the valur of d";
 cin>>d;
 float e=area(a,d);
 cout<<"area ="<<e;

}
int area(int x,int y){
 return(x+y);
}
float area(int x,float y){
 return(3.14*x*y);
}
