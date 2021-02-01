#include<iostream>

using namespace std;

struct book{

 private:
 int id;
 float price;
 char name[20];

 public:
 void input(){

   cout<<"enter the price of id: pricd :name:";
   cin>>id>>price>>name;
    if(id<0)
     id=-id;
  }
  void display(){

   cout<<id<<endl<<price<<endl<<name;
   }

};

int main(){

 book b1;
 b1.input();
 b1.display();
}


