#include<iostream>

using namespace std;

void sajib(int x){

 try{

  if(x==1) throw x;

  else
   if(x==0) throw 'x';

 else
    if(x==-1) throw 1.54;
 }
 catch(int m){ ///throw ate int x throw tai int m by recived;
   cout<<"caught an integer"<<endl;
   cout<<m<<endl;
 }
 catch(char c){
   cout<<"caught an charcter"<<endl;
   cout<<c<<endl;
 }
catch(double t){

   cout<<"caught an double"<<endl;
   cout<<t<<endl;
 }

}

int main(){

sajib(1); ///sajib functio call;
sajib(0);
sajib(-1);

}
