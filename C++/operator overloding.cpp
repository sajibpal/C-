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

   cout<<"a="<<a<<endl<<"b="<<b<<endl;
   }

 compleax operator+(compleax c){///operator/,*,-;

  compleax temp;
   temp.a=a+c.a;
   temp.b=b+c.b;
   return(temp);
 }
 compleax operator-(compleax c){///operator/,*,-;

  compleax temp;
   temp.a=a-c.a;
   temp.b=b-c.b;
   return(temp);
 }
};

int main(){

 compleax c1,c2,c3,c4;
 c1.setdata(3,5);
 c2.setdata(8,13);
 c3=c1+c2;   ///c3=c1.operator+(c2);binary operator;
 c4=c1-c2;  ///c3=c1.operator-(c2);binary operator;
 c3.showdata();
 c4.showdata();
}

