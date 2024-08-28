#include<iostream>
using namespace std;
#include<conio.h>
class student{
    private:
    int age;
    string name;
    public:
    void setage(int r){
        age=r;
    }
    void setname(string n){
        name=n;
    }
    void displayData(){
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Name = "<<name<<endl;
    }
};
int main(){
    student s[3];
    int age;
    string name;
    for(int i=0;i<3;i++){
    cout<<"Give Age"<<endl;
    cin>>age;
    s[i].setage(age);
    cout<<"Give Name"<<endl;
    cin>>name;
    s[i].setname(name);
    }
    cout<<"*************"<<endl;
    for(int i=0;i<3;i++){
    s[i].displayData();
    }
    return 0;
}