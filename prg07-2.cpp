#include<iostream>
using namespace std;
#include<cstring>
#include<conio.h>
class Student{
    int rollno;
    char name[30];
    int marks;
    public:
    void SetData(int ro,const char* ne,int ms){
        rollno=ro;
        strcpy(name,ne);
        marks=ms;
    }
    void DispData(){
        cout<<"Roll No = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
    void InputData(){
        cout<<"Give Data Of Students"<<endl;
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
    Student*s=new Student[10];
    int i;
    cout<<"Enter data"<<endl;
    for(i=0;i<10;i++){
        (s+i)->InputData();
    }
    cout<<"You Entered "<<endl;
    for(i=0;i<10;i++){
        (s+i)->DispData();
    }
    delete []s;
    getch();
    return 0;
}