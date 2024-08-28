#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student{
    int rollno;
    char name[20];
    int marks;
    public:
    Student(){
        rollno=0;
        strcpy(name,"");
        marks=0;
    }
    Student(int rollno,const char * name,int marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=marks;
    }
    void SetData(int rollno,const char * name,int marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=marks;
    }
    void DispData(){
        cout<<"Roll Number = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
    void InputData(){
        cout<<"Enter Data "<<endl;
        cin>>rollno>>name>>marks;
    }
    int GetRollno(){
        return rollno;
    }
    char* GetName(){
        return name;
    }
    int GetMarks(){
        return marks;
    }
};
int main(){
    Student s1,s2;
    s1.InputData();
    s2.SetData(10,"Haseeb",30);
    s1.DispData();
    s2.DispData();
    getch();
    return 0;
}