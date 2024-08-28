#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Product{
    private:
    int pid;
    char pname[20];
    int qty;
    public:
    Product(){
        pid=0;
        strcpy(pname,"");
        qty=0;
    }
    Product(int pid,char*pname,int qty){
        this->pid=pid;
        strcpy(this->pname,pname);
        this->qty=qty;
    }
    void SetData(int pid,char*pname,int qty){
        this->pid=pid;
        strcpy(this->pname,pname);
        this->qty=qty;
    }
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>pid>>pname>>qty;
    }
    void DispData(){
        cout<<"P I'D = "<<pid<<endl;
        cout<<"Product Name = "<<pname<<endl;
        cout<<"Quantity = "<<qty<<endl;
        cout<<"****************"<<endl;
    }
    int GetPid(){
        return pid;
    }
    char* GetPname(){
        return pname;
    }
    int GetQty(){
        return qty;
    }
    Product operator ++(void){
        ++qty;
        return *this;
    }
    Product operator ++(int){
        Product temp=*this;
        ++(*this);
        return temp;
    }
    Product operator --(void){
        --qty;
        return *this;
    }
    Product operator --(int){
        Product temp=*this;
        --(*this);
        return temp;
    }
};
int main(){
    Product p1;
    p1.InputData();
    p1.DispData();
    ++p1;
    p1.DispData();
    --p1;
    p1.DispData();
    return 0;
}