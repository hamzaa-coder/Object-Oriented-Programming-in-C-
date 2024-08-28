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
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>rollno>>name>>marks;
    }
    void DispData(){
        cout<<"Rollno = "<<rollno<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Marks = "<<marks<<endl;
        cout<<"****************"<<endl;
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
    Student operator ++(void);
    Student operator ++(int);
    Student operator --(void);
    Student operator --(int);
};
Student Student :: operator ++(void){
    ++marks;
    return *this;
}
Student Student :: operator ++(int){
    Student temp=*this;
    ++(*this);
    return temp;
}
Student Student :: operator --(void){
    --marks;
    return *this;
}
Student Student :: operator --(int){
    Student temp=*this;
    --(*this);
    return temp;
}
int main(){
    Student s1,s2;
    s1.SetData(123,"abc",20);
    s2=++s1;
    s2.DispData();
    s2=s1--;
    s2.DispData();
    int k;
    k=s2.GetMarks();
    cout<<k<<endl;
    return 0;

}