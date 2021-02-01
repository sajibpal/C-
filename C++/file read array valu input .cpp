#include <bits/stdc++.h>
//#include <fstream>

using namespace std;

int main(){

int n;
cout<<"enter array length =";
cin>>n;
int array[n][n];     ///array length input na diya dile garvase input hobe file thake  input nile;
ifstream input("no1.txt");
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
