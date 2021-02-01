#include<iostream>

using namespace std;

class person{

private:

 static float b;///static member variable initialzation valiue zero;

public:
 static void setdata(float e){///static function(static member variable)
   b=e;
   cout<<"b1="<<b<<endl;
  }

};
float person::b;
int main(){
                   ///same time create all object value show last value;
/*person d1; */   ///static function call no need caller object;
person::setdata(256.59);///or use caller object d1.setdata(256.59);

}
