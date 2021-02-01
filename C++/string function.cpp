#include<iostream>
#include<string>

using namespace std;

int main(){

 int a;
 string name("sajib pal");///name="sajib pal";
  cout<<name<<endl;

  name.append(" is");
  cout<<name<<endl;

  cout<<name.size()<<endl;///a=name.size();cout<<a;

  name.insert(12," students");
  cout<<name<<endl;


  cout<<name.substr(12)<<endl;

  name.erase(6,3); ///6 number from 3 charcter delete;
  cout<<name<<endl;

}
