#include<iostream>
#include<string>

using namespace std;

struct book{

 int id;
 float price;
 string title;
};
int display(book b);
int main(){

 book b1;
 cout<<"enter the value of title,id,price, ";
 getline(cin,b1.title);
 cin>>b1.id>>b1.price;

 display(b1);
}
int display(book b){

 cout<<b.title<<endl<<b.id<<endl<<b.price;
}
