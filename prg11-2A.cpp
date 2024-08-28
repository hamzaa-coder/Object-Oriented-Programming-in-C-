#include<iostream>
using namespace std;
#include<conio.h>
#include<cstring>
class Vehicle{
    int vid;
    char model[30];
    int price;
    public:
    Vehicle(){
        vid=0;
        strcpy(model,"");
        price=0;
    }
    Vehicle(int vid,char* model,int price){
        this->vid=vid;
        strcpy(this->model,model);
        this->price=price;    
    }
    void SetData(int vid,char* model,int price){
        this->vid=vid;
        strcpy(this->model,model);
        this->price=price;
    }
    void DispData(){
        cout<<"V I'd = "<<vid<<endl;
        cout<<"Model = "<<model<<endl;
        cout<<"Price = "<<price<<endl;
    }
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>vid>>model>>price;
    }
    int GetVid(){
        return vid;
    }
    char* GetModel(){
        return model;
    }
    int GetPrice(){
        return price;
    }
    ~Vehicle(){
        cout<<"Vehicle Object Destroyed "<<endl;
    }
};
int main(){
    Vehicle*v;
    v=new Vehicle[10];
    int i;
    cout<<"Enter data"<<endl;
    for(i=0;i<10;i++){
        (v+i)->InputData();
    }
    int lowest=(v+0)->GetPrice();
    int loc=0;
    for(i=1;i<10;i++){
        if((v+i)->GetPrice()<lowest){
            lowest=(v+i)->GetPrice();
            loc=i;
        }
    }
        cout<<"Data Of Vehicle Having lowest price is "<<endl;
        (v+loc)->DispData();
        delete []v;
        getch();
        return 0;
}