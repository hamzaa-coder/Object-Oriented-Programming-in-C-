/*Write Code with Encapsulated Class Student(Rollno,name,marks) with appropriate Functions,Constructors and Destructors.Write Code to Overload
 Stream Insertion << and stream Extraction >> operators so that the data of the object is Displayed and input.Call these functions
in main Function and display the output*/
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
    void DispData(){
        cout<<"Roll Number = "<<rollno<<endl;
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
    friend ostream & operator <<(ostream & os,const Student & s);
    friend istream & operator >>(istream & is,Student & s);
};
ostream & operator <<(ostream & os,const Student & s){
    os<<"Roll number = "<<s.rollno<<endl;
    os<<"Name = "<<s.name<<endl;
    os<<"Marks = "<<s.marks<<endl;
    return os;
}
istream & operator >>(istream & is,Student & s){
    cout<<"Give Data"<<endl;
    is>>s.rollno>>s.name>>s.marks;
    return is;
}
int main(){
    Student s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<s2<<endl;
    getch();
    return 0;
}