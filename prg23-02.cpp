/*Write a program with encapsulated class Product(PID, PName, qty) having functions to set, 
input, and display data with constructors and destructor. Write code to input data of a 
product object and store to binary file "product.bin" in append mode. Write another program 
to read data from the binary file "product.bin" and display the entire data.*/
#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
class Product{
    int pid;
    char name[30];
    int qty;
    public:
    Product(){
        pid=0;
        strcpy(name,"");
        qty=0;
    }
    Product(int pid,char*name,int qty){
        this->pid=pid;
        strcpy(this->name,name);
        this->qty=qty;
    }
    void SetData(int pid,char*name,int qty){
        this->pid=pid;
        strcpy(this->name,name);
        this->qty=qty;
    }
    void DispData(){
        cout<<"PID = "<<pid<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Quantity = "<<qty<<endl;
    }
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>pid>>name>>qty;
    }
    ~Product(){
        cout<<"Object Destroyed"<<endl;
    }
};
int main(){
    ofstream ofs("product.bin",ios_base::app);
    Product p;
    p.InputData();
    ofs.write(reinterpret_cast<char*>(&p),(sizeof(p)));
    ofs.close();
    cout<<"Data Written Successfully"<<endl;
    char choice;
    cout<<"Do You Want to Display All Records?"<<endl;
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cin>>choice;
    if(choice='1'){
        ifstream ifs("product.bin",ios_base::app);
        while(ifs.read(reinterpret_cast<char*>(&p),sizeof(p))){
            p.DispData();
        }
        ifs.close();
    }
    else{
        exit;
    }
    return 0;
}