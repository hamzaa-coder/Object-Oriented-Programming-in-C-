#include<iostream>
using namespace std;
#include<conio.h>
#include<cstring>
class Student{
    int rollno;
    char name[30];
    int marks;
    public:
    Student(){
        rollno=0;
        strcpy(name,"");
        marks=0;
    }
    Student(int rollno,char* name,int marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=marks;    
    }
    void SetData(int rollno,char* name,int marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=marks;
    }
    void DispData(){
        cout<<"Roll no = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
    void InputData(){
        cout<<"Give Data"<<endl;
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
    ~Student(){
        cout<<"Student Object Destroyed "<<endl;
    }
};
int main(){
    Student*s;
    int i;
    cout<<"Enter Students Data"<<endl;
    for(i=0;i<10;i++){
        s[i].InputData();
    }
    cout<<"You Entered "<<endl;
    for(i=0;i<10;i++){
        s[i].DispData();
    }
    getch();
    return 0;
}
