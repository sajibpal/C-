#include<iostream>

using namespace std;

class compleax1{

 private:
  int a,b;
 public:
  void setdata(int x,int y){

   a=x;b=y;
  }

  int geta(){
   return a;
  }
 int getb(){
   return b;
  }
};
class compleax2{

 private:
  int a,b;
 public:
 void display(){

  cout<<"a is="<<a<<endl<<"b is="<<b;
 }
  compleax2()
  { }
  compleax2(compleax1 &c){

    a=c.geta();
    b=c.getb();
   }
};
int main(){

 compleax1 c1;
 c1.setdata(8,10);
 compleax2 c2;
 c2=c1; /// compleax2 c2(c1);constructor make assine site;
 c2.display();
}
