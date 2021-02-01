#include<iostream>

using namespace std;

class compleax{

private:

 int a,b,sum,mulx;
public:

 compleax(){}

 compleax(int x,int y){
  a=x;b=y;
 }
 int add(compleax &c){

  sum=c.a+c.b;
  }
 int mul(compleax &c) {

 mulx=c.a*c.b;
 }
 void display(){

 cout<<"sum="<<sum<<endl<<"mulx="<<mulx;
 }
};
int main(){

compleax ob(3,5);
compleax ob1;
ob1.add(ob);
ob1.mul(ob);
ob1.display();
}
