#include<iostream>
#include<stdexcept>

using namespace std;

class overspeed: public exception{

 int speed;

 public:

  void get_speed(){

   cout<<"your cars not run";

   }
  void set_speed(int p){

    speed=p;
    cout<<"you are car not plane\n";

  }

};

class car{

  int speed1;

 public:

  car(){

   speed1=0;
   cout<<"initial speed is zero\n";

  }
 void acclarator(){

   for(;;){

   speed1+=10;
   cout<<"your car speed1 is="<<speed1<<endl;
   if (speed1>=250){

     overspeed s;
     s.set_speed(speed1); ///set_speed function call and spees1 value pass 250;
     throw s;    ///overspeed class object s throw ;
      }
    }

  }

};

int main(){

 car mycar;
 try{

  mycar.acclarator();

 } catch(overspeed d){ ///recived overspeed object by throw object;


      cout<<d.what()<<endl;
      d.get_speed();  ///get_speed function call;
  }
  return 0;
}
