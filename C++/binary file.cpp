#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){

fstream file("sajib3.bin",ios::binary | ios::in | ios::out );

char name[50];int length;///binary mode work c program style;
strcpy(name,"sajib is learning c++ program");
length=strlen(name);

for(int i=0;i<length;i++){
 file.put(name[i]);
 }

file.seekp(0);
char ch;
while(file.good()){
file.get(ch);
cout<<ch;
 }
}
