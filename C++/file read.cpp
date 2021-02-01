#include<iostream>
#include<fstream>

using namespace std;

int main(){

 ifstream file("name.txt");///automatic read mode;
 ///file.open("name.txt");
 string line;
 while(file.good()){ ///multipole line input from file while(file.good());
 getline(file,line);
 cout<<line<<endl;
 }
}
