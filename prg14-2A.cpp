#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class employee{
    protected:
    int eid;
    char ename[30];
    employee(){
        eid=0;
        strcpy(ename,"");
    }
    employee(int eid,char * ename){
        this->eid=eid;
        strcpy(this->ename,ename);
    }
    void SetData(int eid,char * ename){
        this-> eid=eid;
        strcpy(this->ename,ename);
    }
    void DispData(){
        cout<<"***************************12"<<endl;
        cout<<"Employee I'd = "<<eid<<endl;
        cout<<"Employee Name = "<<ename<<endl;
    }
    void InputData(){
        cout<<"Enter Data "<<endl;
        cin>>eid>>ename;
    }
    int GetEid(){
        return eid;
    }
    char* GetEname(){
        return ename;
    }
    ~employee(){
        cout<<"Employee Object Destroyed "<<endl;
    }
};
class employeeRegular : employee{
    int basicSalary;
    int allowances;
    public:
    employeeRegular(): employee(){
        basicSalary=0;
        allowances=0;
    }
    employeeRegular(int basicSalary,int allowances): employee(eid,ename){
        this->basicSalary=basicSalary;
        this->allowances=allowances;
    }
    void SetData(int eid,char* ename,int basicSalary,int allowances){
        employee::SetData(eid,ename);
         this->basicSalary=basicSalary;
        this->allowances=allowances;
    }
    void DispData(){
        employee::DispData();
        cout<<"Basic Salary = "<<basicSalary<<endl;
        cout<<"Allownaces = "<<allowances<<endl;
        cout<<"*********************"<<endl;
    }
    void InputData(){
        employee::InputData();
        cin>>basicSalary>>allowances;
    }
    int GetEid(){
        return eid;
    }
    char* Ename(){
        return ename;
    }
    int GetBasicSalary(){
        return basicSalary;
    }
    int GetAllowances(){
        return allowances;
    }
    ~employeeRegular(){
        cout<<"Employee Regular Object Destroyed "<<endl;    }
};
class employeePartTime : employee{
    int hoursWorked;
    int ratePerHour;
    public:
    employeePartTime(){
        hoursWorked=0;
        ratePerHour=0;
    }
    employeePartTime(int hoursWorked,int ratePerHour):employee(eid,ename){
        this->hoursWorked=hoursWorked;
        this->ratePerHour=ratePerHour;
    }
    void SetData(int eid,char*ename,int hoursWorked,int ratePerHour){
        employee::SetData(eid,ename);
        this->hoursWorked=hoursWorked;
        this->ratePerHour=ratePerHour;
    }
    void DispData(){
        employee::DispData();
        cout<<"Hours Worked = "<<hoursWorked<<endl;
        cout<<"Rate Per Hour = "<<ratePerHour<<endl;
        cout<<"*********************"<<endl;
    }
    void Inputdata(){
        employee::InputData();
        cin>>hoursWorked>>ratePerHour;
    }
    int GetEid(){
        return eid;
    }
    char* Ename(){
        return ename;
    }
    int GetHoursWorked(){
        return hoursWorked;
    }
    int GetRatePerHour(){
        return ratePerHour;
    }
    ~employeePartTime(){
        cout<<"Employee Part-Time Object Destroyed "<<endl;
    }
};
int main(){
    employeeRegular er1;
    employeePartTime ep1;
    er1.InputData();
    ep1.Inputdata();
    er1.DispData();
    ep1.DispData();
    getch();
    return 0;
}