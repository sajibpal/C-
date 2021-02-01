#include<iostream>

using namespace std;

class Mark{

int mark;

public:

Mark(){

mark=0;
}

Mark(int m){

 mark=m;
 }
void display(){

cout<<"mark"<<mark<<endl;
}

Mark operator++(){

 mark=mark+1;
 return *this; ///return mark value
 }

 Mark operator++(int ){

  Mark duplicated(*this); /// mark value copy duplicate

  mark=mark+1;
  return duplicated;
 }
};
int main(){

Mark sajib(40);

(++sajib).display();
(sajib++).display();
sajib.display();

}
