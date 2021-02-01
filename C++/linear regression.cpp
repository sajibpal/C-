//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class regression{
    double x[100],y[100],sumX,sumY,sumX2,sumY2,mulXY,m,sumE,c;
    int i,N;
    public:
        void input(){
            ifstream fin("linear.txt");
                i=0;
                while(!fin.eof()){
                    fin>>x[i];
                    cout<<"x = "<<x[i];
                    fin>>y[i];
                    cout<<" y = "<<y[i]<<endl;
                    i++;
                }
                N=i;  ///total number length;
                fin.close();
    }
        void Regression(){
            sumX=0,sumY=0,sumX2=0,mulXY=0;
            for(i=0;i<N;i++){
                sumX+=x[i];
                sumY+=y[i];
                sumX2+=x[i]*x[i];
                mulXY+=x[i]*y[i];
            }
            m=((N*mulXY)-(sumX*sumY))/((N*sumX2)-pow(sumX,2));
            c=(sumY-(m*sumX))/N;
        }
        void output(){
            cout<<"\nEquation is Y="<<m<<"x"<<"+"<<c;
        }
 };
 int main(){
    regression s;
    s.input();
    s.Regression();
    s.output();

}
