#include<iostream>

using namespace std;

class person{

 public:
 virtual void intruction(){ ///virtual by at first access drive function.if not drive function then
   cout<<"this name is person"<<endl;///access base function;
  }
};
class student: public person{

 public:
  void intruction(){ ///drive function;
   cout<<"this name is students"<<endl;
  }
};
class farmer: public person{ /// or class farmer: public person{  };

 public:
  void intruction(){ ///drive function;
   cout<<"this name is farmer"<<endl;
  }
};


void whoisthis(person &p){///person member variable use cause person function is virtual function
                          ///& indicate which drive function access by &p;
 p.intruction();

}
int main(){

 farmer komol;
 student sajib;
 whoisthis(komol);
 whoisthis(sajib);
}
