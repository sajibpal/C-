#include<iostream>

using namespace std;

class base{

 public:

  void display(){

   cout<<"display base"<<endl;
   }
 virtual  void show(){

   cout<<"show base"<<endl;
   }
};
class derive:public base{

 public:
   void display(){

   cout<<"display derived"<<endl;
   }
  void show(){

   cout<<"show derived"<<endl;
   }
};

int main(){

base  *p ,obj;
derive obj1;

p=&obj;
p->display();
p->show();

p=&obj1;
p->display();
p->show();

}
