#include<iostream>

using namespace std;

class animal{

  public:
   int age;
   int old(int iage){
    age=iage;
   }
};
class tiger:virtual public animal{

};
class lion:virtual public animal{

};
class liger:public tiger,public lion{
  public:
  int display(){
  cout<<age;
  }
};

int main()
{

 liger sajib;
 sajib.old(34);
 sajib.display();
 }
