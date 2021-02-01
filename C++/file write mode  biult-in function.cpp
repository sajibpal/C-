#include<iostream>
#include<fstream>

using namespace std;

int main(){
 int a;
 ofstream file("sajib1.txt");///automatic write mode;

 file<<"file not open";
 cout<<file.tellp()<<endl; ///write file string length;

 file.seekp(5); ///(5)this number after file string remove;
 file<<" is write";

 cout<<"file is write";

}
