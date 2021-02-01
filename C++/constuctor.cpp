#include<iostream>

using namespace std;

class compleax{

 private:
  int a,b,sum;
 public:
  compleax(int x,int y){
    a=x;b=y;
    cout<<"a="<<a<<endl<<"b="<<b;
  }
  compleax(int k){

   a=k;
  }
   compleax(){
   }
};
int main(){

 compleax c1=compleax(3,4),c2(5), c3; ///compleax c1(3,4),c2(5),c3;
}
