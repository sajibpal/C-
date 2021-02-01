
#include<iostream>

using namespace std;

template<class T ,class T1>

class calculator{

  T num1; T1 num2;

 public:

   calculator(T n1,T1 n2){

      num1=n1; num2=n2;
   }
  void display(){

    cout<<"number are="<<num1<<endl<<num2<<endl;
    cout<<"addtion is="<<add()<<endl;
    cout<<"subtaction is="<<subtraction()<<endl;
    cout<<"Division is="<<division()<<endl;
   }

   T add(){return num1+num2;}
   T subtraction(){return num1-num2;}
   T division(){return num1/num2;}
};
int main(){

 calculator<int,int>obj(2,1);
 cout<<"int result";
 obj.display();
 calculator<float,float>obj1(4.5,8.9);
 cout<<"float result";
 obj1.display();
}
