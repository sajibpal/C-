#include<iostream>
#include<fstream>

using namespace std;

int main(){

 int rows, columns;
int  matrix1[10][10];
ifstream textfile;
textfile.open("name.txt");
for(int i=0; i<4; i++)
{
for(int j=0; j<4; i++)
{
textfile >> matrix1[i][j];
 }
}
for(int i=0; i<4; i++)
{
for(int j=0; j<4; i++)
{
cout << matrix1[i][j];
 }
}

 }




