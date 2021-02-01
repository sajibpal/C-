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
 void showdata(){

   cout<<"a="<<a<<endl<<"b="<<b;
   }


};

int main(){

 compleax c1,*p;
 c1.setdata(3,5);
 *p=c1; /// or p=&c;
 p->showdata();
}
