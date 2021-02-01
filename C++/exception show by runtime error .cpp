#include<iostream>
#include<stdexcept> ///for what function

using namespace std;

int main(){

 int a=10,b=0,c;

 try{

     if(b==0) throw runtime_error("division by zero");

     c=a/b;
     cout<<c<<endl;
  }
  catch(runtime_error x){ ///throw ja return seti recived koror jonno
                         /// catch tar object make kore recived korte hobe

    cout<<"Exception occureed"<<endl;
    cout<<x.what(); ///x ar recived object show;

  }
  return 0;
}
