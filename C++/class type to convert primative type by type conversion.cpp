#include<iostream>

using namespace std;

class compleax{

private:
 int a;
 int b;

public:
 void setdata(int x,int y){
   a=x;b=y;
  }

 operator int(){ ///char,float,double returntype;

   return(a);
 }
};

int main(){

 compleax c1,c3;
 c1.setdata(3,5);
 int x;
  x=c1;
 cout<<"a is="<<x;
}
