#include<iostream>

using namespace std;

class Mark{

int mark;

public:

Mark(int m){

 mark=m;
 }
void display(){

cout<<"mark"<<mark<<endl;
}
 Mark operator++(){

 mark=mark+1;
 return *this ; ///*this pointer mark value return;
 }

 Mark operator++(int ){

  Mark duplicated(*this);

   mark=mark+1;
  return duplicated;
 }

};

int main(){

Mark sajib(40);

(++sajib).display();///pre incremenr;
(sajib++).display();///post incremenr;
sajib.display();

}
