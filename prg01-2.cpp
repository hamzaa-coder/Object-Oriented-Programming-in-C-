#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class student{
    int rollno;
    char name[30];
    int marks;
    public:
    void SetData(int ro,const char* no,int mr){
        rollno=ro;
        strcpy(name,no);
        marks=mr;
    }
    void DisplayData(){
        cout<<rollno<<name<<marks<<endl;
    }
    void InputData(){
        cout<<"Give Data "<<endl;
        cin>>rollno>>name>>marks;
    }
    int GetRollNo(){
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
    student s1,s2;
    s1.InputData();
    s2.InputData();
    s1.DisplayData();
    s2.DisplayData();
    s1.SetData(5,"pqr",20);
    s1.DisplayData();
    getch();
    return 0;
}
