/*Write code with encapsulated class Student(rollno, name, int * marks) with appropriate 
functions, constructors, and destructor. Write a copy constructor to create data for 6 
subjects (marks). In main function, create 01 student object using no-args constructor and 
input its data. Create 2nd student object by using the copy constructor, and display its data.*/
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student{
    int rollno;
    char name[20];
    int* marks;
    public:
    Student(){
        rollno=0;
        strcpy(name,"");
        marks=0;
    }
    Student(int rollno,char* name,int* marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=new int[6];
        for(int i=0;i<6;i++){
            this->marks[i]=marks[i];
        }
    }
    void SetData(int rollno,char* name,int* marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=new int[6];
        for(int j=0;j<6;j++){
            this->marks[j]=marks[j];
        }
    }
    void DispData(){
        cout<<"Roll Number = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks:  {  ";
        for(int j=0;j<6;j++){
            cout<<marks[j]<<"    ";
        }
        cout<<"}"<<endl;
    }
    void InputData(){
        cout<<"Give Data "<<endl;
        cin>>rollno>>name;
        cout<<"Marks "<<endl;
        this->marks=new int[6];
        for(int j=0;j<6;j++){
            cin>>marks[j];
        }
    }
    int GetRollNo(){
        return rollno;
    }
    char* GetName(){
        return name;
    }
    int* GetMarks(){
        return marks;
    }
    Student(Student& s){
        rollno=s.rollno;
        strcpy(name,s.name);
        for(int i=0;i<6;i++){
            this->marks[i]=s.marks[i];
        } 
    }
    ~Student(){
        delete [] marks;
    }
};
int main(){
    Student s1;
    s1.InputData();
    cout<<"First Student's Data"<<endl;
    s1.DispData();
    //Student s2(s1);
    Student s2=s1;  //this is also corret...
    cout<<"Second Student's Data"<<endl;
    s2.DispData();
    return 0;
}