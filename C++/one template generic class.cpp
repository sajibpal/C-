#include<iostream>

using namespace std;

template<class t>class sajib{

t a,b;

public:

   sajib(t x,t y){

     a=x; b=y;
   }
  void display(){

   cout<<"a="<<a<<endl<<"b="<<b<<endl;
   }

};
int main(){

 sajib<int>obj(25,23); ///only one type value pass
 sajib<int,string>obj1("sajib","pal");
 obj.display();
 obj1.display();

}
