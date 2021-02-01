#include<iostream>

using namespace std;

struct book{

 int id;
 float price;
 char name[20];

 void input(){

   cout<<"enter the price of id: pricd :name:";
   cin>>id>>price>>name;

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


