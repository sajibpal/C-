#include<iostream>

using namespace std;

int main(){

cout.precision(6);///precising use only float;
cout<<125.12568<<endl;

cout.width(10);///left from width(10) number print right print string
cout<<"sajib"<<endl;
cout.width(10);
cout<<125.12568<<endl;

cout.fill('*');///default left;
cout.width(10);
cout<<"sajib"<<endl;
cout.width(10);
cout<<125.12568<<endl;

cout.fill('*');
cout.setf(ios::left);///print right;
cout.width(10);
cout<<"sajib"<<endl;
cout.width(10);
cout<<125.12568<<endl;

}
