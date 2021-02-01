#include<iostream>

using namespace std;
class iteam{
 private:
  int a,b,*p;
 public:
  iteam(){
  }
  iteam(int x,int y,int z){

   a=x;
   b=y;
   p=new int;
   *p=z;
   }
   void display(){

    cout<<"a="<<a<<endl<<"b="<<b<<endl<<"p="<<*p;
   }
};

int main(){
iteam a,b(5,6,8);
b.display();
}
