#include<iostream>


using namespace std;

template <class X>
 void swap1(X &e,X &f){ ///X &e swap value change pass i2 and X &f swap value pass i2;

    X temp;
    temp=e;
    e=f;
    f=temp;
 }
 int main(){

   int i1=5, i2=10;
   float f1=1.2,f2=5.5;
   char c1='s',c2='a';

   swap1(i1,i2);
   swap1(f1,f2);
   swap1(c1,c2);

   cout<<"i1="<<i1<<endl<<"i2="<<i2<<endl;
   cout<<"f1="<<f1<<endl<<"f2="<<f2<<endl;
   cout<<"c1="<<c1<<endl<<"c2="<<c2<<endl;
   return 0;
 }
