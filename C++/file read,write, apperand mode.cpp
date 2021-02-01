#include<iostream>
#include<fstream>

using namespace std;

int main(){

fstream file("mode.txt",ios::out | ios::in |ios::app);

cout<<"write to the file"<<endl;///apperent mode use old file content add every run;
file<<"file mode is open"<<endl;

file.seekg(0);///use write file content what number string input read file;
cout<<"read to the file"<<endl;
string line;
while(file.good()){

getline(file,line);
cout<<line<<endl;
 }

}
