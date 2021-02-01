#include<iostream>
#include<cstring>

using namespace std;

int main(){

 char name[20],lastname[20];
 cout<<"enter our name";
 cin>>name;

 strcpy(lastname,name);
 cout<<lastname<<endl;

 int f=strlen(lastname);
 cout<<f;


}

