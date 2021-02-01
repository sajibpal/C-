#include<iostream>

using namespace std;
class B;
class A{

private:
 int a;

public:
 void setdata(int x){
   a=x;
 }
 friend void fun(A,B);
};
class B{

private:

 int b;

public:
 void setdata(int y){
   b=y;
 }
 friend void fun(A,B);
};
void fun(A c,B d){

 cout<<"sum="<< c.a+d.b;
}

int main(){

 A c1;
 B c2;
 c1.setdata(3);
 c2.setdata(4);
 fun(c1,c2);
}
