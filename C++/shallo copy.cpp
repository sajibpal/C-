#include<iostream>

using namespace std;

class cop{

 private:
  int a,b;

 public:
  void setdata(int x,int y){
   a=x;
   b=y;
  }
  void showdata(){

   cout<<"a="<<a<<endl<<"b="<<b;
  }
 };

 int main(){

  cop obj;
  obj.setdata(5,6);
  cop obj1=obj;
  obj1.showdata();
 }
