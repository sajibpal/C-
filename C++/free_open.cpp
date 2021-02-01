#include <iostream>
#include <fstream>

using namespace std;

int main(){

int n;
cin>>n;
int array[n][n];
ifstream input("no.txt");
for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
 input>>array[i][j];
  }
 }

for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
 cout<<array[i][j]<<" ";
  }
  cout<<endl;
 }
}
