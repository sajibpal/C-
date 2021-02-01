#include <iostream>
using namespace std;

class Father{

protected:

 int hight,z,k;

public:

  Father(int h){

   hight=h;

   cout<<"father class constructor call"<<endl;
  }

};

class Child:public Father{

public:

  Child(int x):Father(x){ ///x is refarence value transmit and father(x)is base constructor call function;

    cout<<"child class constructor call"<<endl;
  }

 void display(){

  cout<<"hight="<<hight;
  }

};

int main(){

Child obj(30);
obj.display();

}
