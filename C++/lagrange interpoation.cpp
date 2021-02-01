#include<bits/stdc++.h>

using namespace std;

int main()                                                 //x[]=2,6,8,9,10
{                                                         //y= f[]=20,60,40,90
    int i,j,len;
    cout<<"Enter no of sample points number = ";
    cin>>len;
    float add,sum=0,x[len],f[len],a;

    ifstream input("no.txt");

    for(int i=0;i<len;i++){

        input>>x[i]; ///file first value 0 index x[i] input and 0 index file second value input
        input>>f[i]; ///file second row first value 1 index x[i] input and 1 index file second row value input
                    ///aivabe serialy first x[i] and second f[i] input nibe len projonto;
        }
     for(int i=0;i<len;i++){

        cout<<x[i]<<" "<<f[i]<<endl;

        }
    cout<<"\nEnter your x value for calculation : ";
    cin>>a;

    for(i=1;i<=len;i++)
    {
        for(j=1;j<=len;j++)
        {
            if(j!=i)                           ///(x1-x1)hobe na tahole value is zero hobe;
            add=f[i]*(a-x[j])/(x[i]-x[j]);
            cout<<add<<endl;                   /// y1=f[1]*(a-x2)(a-x3).../(x1-x2)(x1-x3)... ai babe y2, y3 hobe
        }                                     ///sum=y1+y2+y3;
        sum+=add;
    }
    cout<<"\nThe estimated value of f(x) = "<<sum;
    fstream k("no.txt",ios::out |ios::app);
    k<<endl<<sum;

    return 0;
}
