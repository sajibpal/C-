#include <bits/stdc++.h>
//#include <fstream>

using namespace std;

class student{

int array[4][4];

public:
void input(){
 ifstream input("no1.txt");
   for(int i=0;i<4;i++){
     for(int j=0;j<4;j++){
      input>>array[i][j];
        }
     }
 }
void display(){

 for(int i=0;i<4;i++){
  for(int j=0;j<4;j++){
   cout<<array[i][j]<<" ";
   }
   cout<<endl;
   }
 }
};
int main(){

student obj;
//obj.n=4;
obj.input();
obj.display();
}
