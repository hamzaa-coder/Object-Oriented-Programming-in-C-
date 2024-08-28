#include<iostream>
using namespace std;
#include<conio.h>
#include<cstring>
class Product{
    int pid;
    char pname[30];
    int qty;
    public:
    Product(){
        pid=0;
        strcpy(pname,"");
        qty=0;
    }
    Product(int pid,char* pname,int qty){
        this->pid=pid;
        strcpy(this->pname,pname);
        this->qty=qty;    
    }
    void SetData(int pid,char* pname,int qty){
        this->pid=pid;
        strcpy(this->pname,pname);
        this->qty=qty;
    }
    void DispData(){
        cout<<"Product I'd = "<<pid<<endl;
        cout<<"Product Name = "<<pname<<endl;
        cout<<"Quantity = "<<qty<<endl;
    }
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>pid>>pname>>qty;
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
    ~Product(){
        cout<<"Product Object Destroyed "<<endl;
    }
};
int main(){
    Product*p=new Product[10];
    int i;
    cout<<"Enter data"<<endl;
    for(i=0;i<10;i++){
        (p+i)->InputData();
    }
    int lowest=(p+0)->GetQty();
    int loc=0;
    for(i=1;i<10;i++){
        if((p+i)->GetQty()<lowest){
            lowest=(p+i)->GetQty();
            loc=i;
        }
    }
        cout<<"Data Of Product Having lowest Quantity is "<<endl;
        (p+loc)->DispData();
        delete []p;
        getch();
        return 0;
}