
#include<iostream>

using namespace std;

class bc{

 public:
   int b;
  void show(){

   cout<<"b="<<b<<endl;
   }
};
class dc:public bc {

 public:
   int d;
  void show(){

   cout<<"b="<<b<<endl<<"d="<<d;
   }
};

int main(){

bc  *p ,obj;
dc obj1;

p=&obj;
p->b=100;
p->show();

p=&obj1;
p->b=50;
p->show();

dc *k;
k=&obj1;
k->d=40;
k->show();
}
