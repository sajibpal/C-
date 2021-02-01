#include<iostream>
#include<string>

using namespace std;

template <class x>
void setdata(x a,x b){ ///x use data type and any data type convart;

    if(a>b){ ///not test string comparen only show;
     cout<<"big data="<<a<<endl;}
    else
     cout<<"big data="<<b<<endl;
}

int main(){

 setdata(5,3);
 setdata(3.25,7845.16);
 setdata("pal","sajib");
}
