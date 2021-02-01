#include<iostream>
using namespace std;

struct Std_info{ ///using structure many type of data combination together;
    int id;
    float gpa;
    string name;
    Std_info *next;/// linklist node ar vitor je link address part thake sei pointer;
};
class Student{
    private:
        Std_info *head,*tail; ///structure node pointer cause  node address point korbe;
    public:
        Student(){
            head=NULL; ///initial situation head and tail null  hobe;
            tail=NULL;
        }
        void addStudent(int i,string n,float g){
            Std_info *temp=new Std_info; ///strucure size anujai dynamic node create;
            temp->id=i;
            temp->gpa=g;
            temp->name=n;
            temp->next=NULL;
            if(head==NULL){ ///first node hole;
                head=temp; /// first noder address start/head pointer thakbe ata fixed link list  travising korar somoy;
                tail=temp; /// first node address temporily pointer thakbe ata link list travising korete somoy head pointer
                           ///na move kore ata pointer  ta move korbe; tail=head deya jay;
            }
            else{
                tail->next=temp;
                tail=tail->next;
            }
        }
        void Display(){

            Std_info *temp=head;
            int i=0;
            if(head==NULL){
                cout<<"List Is Empty"<<endl;
            }
            else{
                    while(temp!=NULL){
                        cout<<"Id For "<<i+1<<" No :"<<temp->id<<endl;
                        cout<<"Name For "<<i<<" No :"<<temp->name<<endl;
                        cout<<"Gpa For "<<i<<" No :"<<temp->gpa<<endl;
                        i++;
                        temp=temp->next;
                        cout<<endl<<endl;
                    }
            }

        }
        void insertStudentBack(int i,string n,float g){
            Std_info *temp=new Std_info;//temp contain new node address
            temp->id=i;
            temp->gpa=g;
            temp->name=n;
            temp->next=NULL;
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                Std_info *temp1=head;//temp1 contain head address for find which have null
                while(temp1->next!=NULL){
                    temp1=temp1->next;
                }
                temp1->next=temp;
                tail=tail->next;
            }
        }
        void insertStudentFirst(int i,string n,float g){
            Std_info *temp=new Std_info;//temp contain new node address
            temp->id=i;
            temp->gpa=g;
            temp->name=n;
            temp->next=NULL;
            if(head==NULL){
                head=temp;
                tail=temp;
            }
            else{
                temp->next=head;
                head=temp;
            }
        }
        void deleteStudentFirst(){
            if(head==NULL){
                cout<<"List Is Empty";
            }
            else if(head->next==NULL){
                Std_info *temp=head;
                head=head->next;
                tail=tail->next;
                delete temp;
            }
            else{
                Std_info *temp=head;
                head=head->next;
                delete temp;
            }
        }
        void deleteStudentBack(){
            Std_info *temp=head,*temp1;
            if(head==NULL){
                cout<<"List Is Empty"<<endl;
            }
            else if(head->next==NULL){
                head=head->next;//or,head=NULL
                tail=tail->next;//or,tail=NULL
                delete temp;
            }
            else{
                while(temp->next!=NULL){
                    temp1=temp;
                    temp=temp->next;
                }
                delete temp;
                tail=temp1;
                tail->next=NULL;
            }
        }
};
int main(){
    Student s;
    s.addStudent(10,"Utsab",3.5);
    s.addStudent(11,"Sebak",3.2);
    s.addStudent(10,"Babu",3.1);
    s.insertStudentBack(22,"Bablu",3.4);
   // s.insertStudentFirst(23,"kablu",3.4);
    //s.deleteStudentFirst();
    s.deleteStudentBack();
    s.Display();
}
