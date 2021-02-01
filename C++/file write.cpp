#include<iostream>
#include<fstream>

using namespace std;

int main(){
 int a;
 ofstream file("sajib.txt");///automatic write mode;
 ///file.open("sajib.txt");

 cin>>a;
 file<<a<<endl;
 file<<"file is write";


}
