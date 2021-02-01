#include<iostream>

using namespace std;

class compleax{

 private:
  int a,b;
 public:
   compleax(){
   }

  compleax(int k){

   a=k;b=0;
  }

 void display(){

  cout<<"a is="<<a<<endl<<"b is="<<b;
 }

};
int main(){

 compleax c1;
 int x=5;
 c1=x; ///primitive type convert class type;c1.compleax(x)
 c1.display();
}
