#include<iostream>
using namespace std;
#include<string.h>
class employee{
    int eid;
    char ename[20];
    public:
    employee(){
        eid=0;
        strcpy(ename,"");
    }
    employee(int eid,char * ename){
        this->eid=eid;
        strcpy(this->ename,ename);
    }
    void SetData(int eid,char * ename){
        this->eid=eid;
        strcpy(this->ename,ename);
    }
    void DispData(){
        cout<<"Employee I'D = "<<eid<<endl;
        cout<<"Employee name = "<<ename<<endl;
    }
    void InputData(){
        cout<<"Enter Data"<<endl;
        cin>>eid>>ename;
    }
    int GetEid(){
        return eid;
    }
    char* GetEname(){
        return ename;
    }
    ~employee(){}
    friend class employeePartTime;
};
class employeePartTime{
    int eid;
    char ename[20];
    int Ehours;
    int Erate;
    public:
    employeePartTime(){
        Ehours=0;
        Erate=0;
    }
    employeePartTime(int eid,char* ename,int Ehours,int Erate){
        this->eid=eid;
        strcpy(this->ename,ename);
        this->Ehours=Ehours;
        this->Erate=Erate;
    }
    void SetData(int eid,char* ename,int Ehours,int Erate){
        this->eid=eid;
        strcpy(this->ename,ename);
        this->Ehours=Ehours;
        this->Erate=Erate;
    }
        void SetData(employee emp0){
        eid = emp0.eid;
        strcpy(ename, emp0.ename);
        Ehours = 0;
        Erate = 0;
    }
    void DispData(){
         cout<<"Employee I'D = "<<eid<<endl;
        cout<<"Employee name = "<<ename<<endl;
        cout<<"Employee Hours = "<<Ehours<<endl;
        cout<<"Employee Rate = "<<Erate<<endl;     
    }
    void InputData(){
        cout<<"Enter Data "<<endl;
        cin>>eid>>ename>>Ehours>>Erate;
    }
    int GetEid(){
        return eid;
    }
    char * GetEname(){
        return ename;
    }
    int GetEhours(){
        return Ehours;
    }
    int GetErate(){
        return Erate;
    }
    ~employeePartTime(){}
};
int main(){
    employee emp;
    emp.SetData(12,"abc");
    employeePartTime empPT;
    empPT.SetData(emp);
    empPT.DispData();
    return 0;
}