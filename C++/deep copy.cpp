#include<iostream>

using namespace std;

class cop{

 private:
  int a,b,*p;
 public:

  void setdata(int x,int y,int z){
   a=x;b=y;*p=z;
  }
  void display(){
   cout<<"a="<<a<<"b="<<b<<"*p="<<*p;
  }
  cop(){
  }
  cop(cop &d){
   b=d.b;
   a=d.a;
   p=new int;
   *p=*(d.p);
  }
};
int main(){

 cop d1;    ///value tansfer pointer and notmal variable
 d1.setdata(5,8,10); ///then this process use
 cop d2=d1; ///cop d2(d1);same class for cop d2=d1 copy;
 d2.display();
}
