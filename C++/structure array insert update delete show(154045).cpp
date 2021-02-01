#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string dept;

};
static int location=0;
static int size;

///Function prototype

void insert(Student s[],int index);
void update(Student s[],int index);
void deletion(Student s[],int index);
void display(Student s[]);

int main(){

    int option,index;
    cout<<"Enter Your Array Size"<<endl;
    cin>>size;
    Student s[size];

  do{   cout<<"1.Insert"<<endl;
        cout<<"2.Update"<<endl;
        cout<<"3.Delete"<<endl;
        cout<<"4.Show"<<endl;
        cout<<"Enter Your Option choice"<<endl;
        cin>>option;

        switch(option){

            case 1:
                    cout<<"Enter Your index  Insert"<<endl;
                    cin>>index;
                    insert(s,index);
                    break;
            case 2:
                    cout<<"Enter Your index Update"<<endl;
                    cin>>index;
                    update(s,index);
                    break;
            case 3:
                    cout<<"Enter Your index  Delelte"<<endl;
                    cin>>index;
                    deletion(s,index);
                    break;
            case 4:
                    display(s);
                    break;
            default:
                cout<<"No choice your option";
                break;
        }
    }
    while(1);
}

 ///   Insert Methode

void insert(Student s[],int index){


    int temp_location=location;
     if(location>size){
        cout<<"Overflow Condition"<<endl;
     }
    else if(index>=(location+1)){

        cout<<"Insert Value before Index"<<location<<endl;
    }
    else{
       while(temp_location!=index){
           s[temp_location].id=s[temp_location-1].id;
           s[temp_location].name=s[temp_location-1].name;
           s[temp_location].dept=s[temp_location-1].dept;
           temp_location--;
       }
        cout<<"Enter Your Insert Id"<<endl;
        cin>>s[index].id;
        cout<<"Enter Your Insert Name"<<endl;
        cin>>s[index].name;
        cout<<"Enter Your Insert Department"<<endl;
        cin>>s[index].dept;
        location++;
    }
}

/// Upadate Methode

void update(Student s[],int index){

     if(index>location){

        cout<<"Your Location not To Be Updated"<<endl;
    }
    else{
        cout<<"Enter Your Updated Id"<<endl;
        cin>>s[index].id;
        cout<<"Enter Your Updated Name"<<endl;
        cin>>s[index].name;
        cout<<"Enter Your Updated Department"<<endl;
        cin>>s[index].dept;
    }
}

 ///   Display Methode

void display(Student s[]){
    int i;
    for(i=0;i<location;i++){
        cout<<"Your Id="<<s[i].id<<endl;
        cout<<"Your Name="<<s[i].name<<endl;
        cout<<"Your Department="<<s[i].dept<<endl;
    }
}

///Delete Methode

void deletion(Student s[],int index){


    int temp_position=index;
    if(index>location){
        cout<<"Your Location not Updated"<<endl;
    }
    else{
        while(index<(location-1)){
            s[index]=s[index+1];
            index++;
        }
        location--;
        cout<<"Delete Id Is "<<index<<endl;
    }
}
