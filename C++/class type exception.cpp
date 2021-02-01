#include<iostream>

using namespace std;

class sajib{

private:
  int  n;
  float m;

public:
   sajib(int x ,float y){

    n=x;  m=y;
  }
  void display(){
   cout<<"n="<<n<<endl<<"m="<<m;
  }
};

int main(){

 try{

  throw sajib (5,10.30); ///object no declaration this is exception;

}
catch(sajib j ){

  cout<<"Exception occcure"<<endl;
  j.display();
  }
}
