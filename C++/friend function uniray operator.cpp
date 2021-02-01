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
friend compleax operator-(compleax );

};
 compleax operator-(compleax c){

  compleax temp;
   temp.a=-c.a;
   temp.b=-c.b;
   return(temp);
 }

int main(){

 compleax c1,c2,c3;
 c1.setdata(3,5);
 c2=-c1;       ///c2=operator-(c1);
 c2.showdata();
}
