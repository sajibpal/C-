#include<iostream>
#include<string>

using namespace std;

class student1{

 protected: ///protected variable use other sub class and
  string name; ///do not use main function and public use all section;
  int age;
 public:
 void setname(string iname){
   name=iname;
  }
 void setage(int iage){
   age=iage;
  }
};
class student2:public student1{

 private: ///privare variable use own class
  int id;
 public:
  void setid(int iid){
    id=iid;
  }
  void showdata(){
   cout<<"name is="<<name<<endl<<"age is="<<age<<endl<<"id is="<<id;
  }
};

int main(){

 student2 s;
 s.setname("sajib pal");
 s.setage(23);
 s.setid(154045);
 s.showdata();
}
