#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
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
    Student(int rollno,const char* name,int marks){
        this->rollno=rollno;
        strcpy(this->name,name);
        this->marks=marks;
    }
    void SetData(int rollno, const char* name,int marks){
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
        cout<<"Give Data "<<endl;
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
    Student operator +(Student s0);
    Student operator -(Student s0);
    Student operator *(Student s0);
    ~Student(){

    }
};
Student Student:: operator +(Student s0){
    Student temp;
    temp.SetData(this->rollno,this->name,this->marks+s0.marks);
    return temp;
}
Student Student:: operator -(Student s0){
    Student temp;
    temp.SetData(this->rollno,this->name,this->marks-s0.marks);
    return temp;
}
Student Student:: operator *(Student s0){
    Student temp;
    temp.SetData(this->rollno,this->name,this->marks*s0.marks);
    return temp;
}
int main(){
    Student s1,s2,s3;
    s1.InputData();
    s2.SetData(123,"Haseeb",50);
    s3=s1+s2;
    s3.DispData();
    getch();
    return 0;
}
