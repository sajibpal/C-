#include<iostream>
using namespace std;

void inputselection(int array[],int size){

   int i, key, j,loc,temp;
   for (i = 0; i < size-1; i++) ///key point array first position thake array ager position projonto hobe;
   {
       key = array[i];  /// first position key point asssine ;
       loc= i;

      for(j=i+1 ;j<size ;j++) ///key point por theke jotokhon array[n] najay  loop   kaj kobe
       {
         if(array[j]<key){ ///key cheya chotto value pele kaj korbe;

           key = array[j]; /// key ate j chotto man asine korbe porer loop ai assine value key cheye chotto value pele abar key j assine hobe;
           loc=j;  ///kon loction ses chotto peyeche ta define kora
         }
       }
       ///key point swap vaule small position
       temp=array[i];
       array[i]=array[loc];
       array[loc]=temp;
   }
}
void showselection(int array[], int size)
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

inputselection(array,size);
showselection(array, size);
}
