#include<iostream>

using namespace std;

template<class t>

 void getdata(t x){


    cout<<"x="<<x<<endl;

   }
 void getdata(int x){


    cout<<"x="<<x<<endl;

    }

int main(){


 getdata("sajib");
 getdata(23);

}
