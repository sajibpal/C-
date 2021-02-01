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

friend Mark operator--(Mark &k);

friend Mark operator--(Mark &k,int);

};
 Mark operator--(Mark &k){

 k.mark=k.mark-1;
 return k ;
 }
 Mark operator--(Mark &k,int );{

  Mark duplicated(k);

  k.mark=k.mark-1;
  return duplicated;
 }
int main(){

Mark sajib(40);

(--sajib).display();
(sajib--).display();
sajib.display();

}
