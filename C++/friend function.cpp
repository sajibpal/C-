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
 friend void fun(compleax );
};

void fun(compleax c){

 cout<<"sum="<<c.a+c.b;
}

int main(){

 compleax c1;
 c1.setdata(3,5);
 fun(c1);
}
