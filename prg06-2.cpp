#include<iostream>
using namespace std;
#include<cstring>
#include<conio.h>
class Vehicle{
    int vid;
    char model[30];
    int price;
    public:
    void SetData(int vd,const char* ml,int pe){
        vid=vd;
        strcpy(model,ml);
        price=pe;
    }
    void DispData(){
        cout<<"V I'D = "<<vid<<endl;
        cout<<"Model "<<model<<endl;
        cout<<"Price = "<<price<<endl;
    }
    void InputData(){
        cout<<"Give Data Of Books"<<endl;
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
};
int main(){
    Vehicle s[10];
    int i;
    cout<<"Input Data"<<endl;
    for(i=0;i<10;i++){
        s[i].InputData();
    }
    int highest=s[0].GetPrice();
    int loc=0;
    for(i=0;i<10;i++){
        if(s[i].GetPrice()<highest){
            highest=s[i].GetPrice();
            loc=i;
        }
    }
    s[loc].DispData();
    getch();
    return 0;
}