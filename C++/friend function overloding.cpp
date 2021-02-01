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


friend compleax operator+(compleax ,compleax );
};

 compleax operator+(compleax c,compleax d){///operator/,*,-;

  compleax temp;
   temp.a=c.a+d.a;
   temp.b=c.b+d.b;
   return(temp);
 }

int main(){

 compleax c1,c2,c3;
 c1.setdata(3,5);
 c2.setdata(8,13);
 c3=c1+c2;       ///c3=operator+(c1,c2);
 c3.showdata();  ///c1,c2 two object argument pass because fiends function not caller object;
}
