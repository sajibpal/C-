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

 compleax add(compleax c){

  compleax temp;
   temp.a=a+c.a;
   temp.b=b+c.b;
   return(temp);
 }
};

int main(){

 compleax c1,c2,c3;
 c1.setdata(3,5);
 c2.setdata(8,13);
 c3=c1.add(c2);
 c3.showdata();
}
