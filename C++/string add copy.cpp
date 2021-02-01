#include<iostream>
#include<string>

using namespace std;

int main(){

 string name,lastname,add;
 cout <<"enter you name and lastname=";
 cin>>name>>lastname;
 add=name+" "+lastname;///add=name;string copy;
 cout<<add<<endl;
  if(name=="sajib") ///if(name>"sajib");
   cout<<"this is name";
  else
   cout<<"this is lastname";
}
