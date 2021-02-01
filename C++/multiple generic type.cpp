#include<iostream>

using namespace std;

template<class t,class t1>

 void getdata(t x,t1 y){


    cout<<"x="<<x<<endl<<"y="<<y<<endl;

   }

int main(){

 getdata("sajib",25.36);///two template use two type value auto convert;
 getdata(26,25.36);     ///one template use onre type value auto convert;
 getdata(25.36,"pal");



}
