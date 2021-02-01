#include<iostream>

using namespace std;

struct book{

 int id;
 float price;
 char name[20];
};
void display(book b2);
book input();

int main(){

 book b1;
 b1=input();
 display(b1);
}
book input(){

 book b;
 cout<<"enter the price of id: pricd :name:";
 cin>>b.id>>b.price>>b.name;
 return(b);
}
void display(book b2){

 cout<<b2.id<<endl<<b2.price<<endl<<b2.name;
 }
