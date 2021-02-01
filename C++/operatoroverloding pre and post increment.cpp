#include<iostream>

using namespace std;

class Time{


int hourse;
int minite;

public:

Time(){

 hourse=0;
 minite=0;
 }


Time(int x,int y){

  hourse=x;
  minite=y;
 }
 void display(){

 cout<<"hh"<<hourse<<endl<<"mm"<<minite<<endl;
 }

friend Time operator--(Time &t);///pre decerement
friend Time operator--(Time &t,int);///post decerement int by differient ;

};

 Time operator--(Time &t){

  if (t.minite==0){

   t.hourse=t.hourse-1;
   t.minite=59;
  }
  else{

  --(t.minite);
  }
  return t;
 }
Time operator--(Time &t,int){
  Time time(t);
  if (t.minite==0){

   t.hourse=t.hourse-1;
   t.minite=59;
  }
  else{

  --(t.minite);
  }
  return t;
 }
 int main(){

 Time t1(10,59),t2(10,30);

 (--t1).display();
 (t2--).display();
 t2.display();

 }
