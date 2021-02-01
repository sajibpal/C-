#include<iostream>
using namespace std;

void inputinserting(int array[],int size){

   int i, key, j;
   for (i = 1; i < size; i++) ///key point array two position thake first dorte hobe;
   {
       key = array[i];  /// two position key point asssine ;
       j = i-1;   ///array key point ager point thake search kra suru korbe;

       while (j >= 0 && array[j] > key) ///key point por theke jotokhon array[0] najay and key theke boro pay tokhon loop
       {                                  ///kaj kobe

           array[i] = array[j]; ///array[key]=array[j] j boro man swap korbe key gore array te
           j--;  ///j man komte komte 4,3,2,1,0 jabe;
       }
       array[j+1] = key; ///sob ses jekhane j-- ar man komte komte ar boro pabe na key man assine hobe;
   }                      ///first step array[-1+1]=key array[]={3,1,5,9,8,2}

}

void showinserting(int array[], int size)
{
   int i;
   for (i=0; i < size; i++){
       cout<< array[i]<<" ";
    }
}

int main(){

int array[30],size;

cout<<"enter the array size ";
cin>>size;
for(int k=0;k<size;k++){

 cin>>array[k];
}

inputinserting(array,size);
showinserting(array, size);
}
