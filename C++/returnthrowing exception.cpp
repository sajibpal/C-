#include<iostream>

using namespace std;

void test(double x,double y){

 try{

  if(y==0.00) throw y;

  else
    cout<<"division "<<x/y<<endl;

  }
 catch(double ){      /// or catch(double m)    ///throw ate int x throw tai int m by recived;
   cout<<"caught an double y"<<endl;
   //cout<<m<<endl;
   throw;           ///treturn throw
  }
}
int main(){

 try{

  test(9.55,4.36);
  test(2.55,0.00);
 }
 catch(double ){ ///or catch(double m)

   cout<<"caught an double y"<<endl;
 }

}
