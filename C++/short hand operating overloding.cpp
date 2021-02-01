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

 compleax operator+=(compleax c){///operator/,*,-;

  compleax temp;
   a+=c.a;    ///a=a+a.c;
   temp.a=a;
   b+=c.b;
   temp.b=b;
   return(temp);
 }
};

int main(){

 compleax c1,c2,c3;
 c1.setdata(3,5);
 c2.setdata(8,13);
 c1+=c2;      ///c1=c1.operator+(c2);binary operator;
 c1.showdata();             ///c3=c1; c3.showdta();


}
