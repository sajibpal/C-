#include<iostream>

using namespace std;

class compleax{

 private:
  int a,b;
 public:
  compleax(int x,int y){
    a=x;b=y;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
  }
  compleax(int k){

   a=k;
  }
 /* compleax(){
   }*/

  compleax(compleax &c){///constructor again call (compleax c) for & use;

      a=c.a;
      b=c.b;
   }
 void display(){

 cout<<"a="<<a<<endl<<"b="<<b;
 }
};
int main(){

 compleax c1(3,4),c2(5),c3=c1;///no use default constructor c3(3,4) assinea ;
 compleax c4(c3);///compleax c4=c1;
 c4.display();
}
