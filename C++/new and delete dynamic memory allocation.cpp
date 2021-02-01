#include<iostream>

using namespace std;

int main(){

 int *pointer=NULL,input,temp;
 cout<<"enter the array size";
 cin>>input;
 pointer=new int[input];

 for(int i=0;i<input;i++){

   cout<<"set array iteam"<<i+1<<endl;
   cin>>temp;
   *(pointer+i)=temp;

  }
cout<<"the item you have inter"<<endl;
  for(int i=0;i<input;i++){
   cout<<i+1<<"array iteam ="<<*(pointer+i)<<endl;
   }
}
