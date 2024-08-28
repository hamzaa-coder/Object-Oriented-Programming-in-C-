#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
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
    Product(int pid,char *pname,int qty){
        this->pid=pid;
        strcpy(this->pname,pname);
        this->qty=qty;
    }
    void SetData(int pid,char * pname,int qty){
        this->pid=pid;
        strcpy(this->pname,pname);
        this->qty=qty;
    }
    void DispData(){
        cout<<"Product I'D = "<<pid<<endl;
        cout<<"Product Name = "<<pname<<endl;
        cout<<"Product Quantity = "<<qty<<endl;
    }
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>pid>>pname>>qty;
    }
    int GetPid(){
        return pid;
    }
    char * GetPname(){
        return pname;
    }
    int GetQty(){
        return qty;
    }
    ~Product(){}
};
void AddData(){
    Product p;
    ofstream ofs ("Product.bin",ios_base::app | ios_base::binary);
    p.InputData();
    ofs.write(reinterpret_cast<char*>(&p),sizeof(p));
    cout<<"Record Added Successfully"<<endl;
    ofs.close();
}
void DisplayData(){
    Product p;
    ifstream ifs("Product.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
        p.DispData();
    }
    ifs.close();
}
void ModifyData(){
    int r;
    cout<<"Give Product I'D of Product You want to Modify"<<endl;
    cin>>r;
    Product p;
    ifstream ifs("Product.bin",ios_base::binary);
    ofstream ofs("temp.bin",ios_base::binary);
    while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
        if(p.GetPid()==r){
            p.InputData();
        }
        ofs.write(reinterpret_cast<char*>(&p),sizeof(p));
    }
    ifs.close();
    ofs.close();
    ifstream ifs2("temp.bin",ios_base::binary);
    ofstream ofs2("Product.bin",ios_base::binary);
    while(ifs2.read(reinterpret_cast<char*>(&p),sizeof(p))){
        ofs2.write(reinterpret_cast<char*>(&p),sizeof(p));
    }
    ifs2.close();
    ofs2.close();
    cout<<"Data Modified Successfully"<<endl;
}
int main(){
    char ch;
    while(1){
        cout<<"1.Add data"<<endl;
        cout<<"2.Display Data"<<endl;
        cout<<"3.Modify Data"<<endl;
        cout<<"Exit"<<endl;
        ch=getche();
        cout<<endl;
        if(ch=='1'){
            AddData();
        }
        else if(ch=='2'){
            DisplayData();
        }
        else if(ch=='3'){
            ModifyData();
        }
        else if(ch=='4'){
            break;
        }
        else{
            cout<<"Invalid Choice,Choose Again"<<endl;
        }
    }
    return 0;
}