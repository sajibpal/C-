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

friend Mark operator--(Mark &k);///pre drecement use freiend must referance object creata;

friend Mark operator--(Mark &k,int);///post drecement different by int ;

};
 Mark operator--(Mark &k){

 k.mark=k.mark-1; ///or k.mark=--(k.mark)
 return k ;
 }
 Mark operator--(Mark &k,int ){

  Mark duplicated(k); ///pre  drecment k copy duplicate

  k.mark=k.mark-1;
  return duplicated;///pre drecement valu of k return
 }
int main(){

Mark sajib(40);

(--sajib).display();
(sajib--).display();
 sajib.display();

}
