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

 compleax operator-(){///operator/,*,-;

  compleax temp;
   temp.a=-a;
   temp.b=-b;
   return temp;
 }
};

int main(){

int p,v;
cin>>p>>v;
 compleax c1,c2,c3;
 c1.setdata(p,v);
 c2=-c1;       ///c3=c1.operator-();uniray operator;
 c2.showdata();
}
