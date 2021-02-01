#include<iostream>
#include<string.h>

using namespace std;

class book{

 private:
 int a;
 float b;
 char c[20];

 public:
 void input(int x,float y, char z[20]){

   a=x;
   b=y;
   strcpy(c,z);
  }
  void display(){

   cout<<a<<endl<<b<<endl<<c;
   }

};
/*void book ::input(int x,float y, char z[20]){

   a=x;    //outside class function
   b=y;
   strcpy(c,z);
}*/
int main(){
 int id; float price; char name[20];
 book b1;
 cout<<"enter the price of id: pricd :name:";
 cin>>id>>price>>name;
 b1.input(id,price,name);
 b1.display();
}


