#include<iostream>
using namespace std;
class A{
    int i;
    public:
    A(){
        i=0;
    }
    void SetI(int i){
        this->i=i;
    }
    void InputI(){
        cout<<"Give I"<<endl;
        cin>>i;
    }
    void DispI(){
        cout<<"i= "<<i<<endl;
    }
    A operator +(A a0){
        A temp;
        temp.SetI(this->i+a0.i);
        return temp;
    }
     A operator -(A a0){
        A temp;
        temp.SetI(this->i-a0.i);
        return temp;
    }
     A operator *(A a0){
        A temp;
        temp.SetI(this->i*a0.i);
        return temp;
    }
     A operator /(A a0){
        A temp;
        temp.SetI(this->i/a0.i);
        return temp;
    }
};
int main(){
    A a1,a2,a3;
    a1.SetI(30);
    a2.SetI(10);
    a3=a1+a2;
    a3.DispI();
    a3=a1-a2;
    a3.DispI();
    a3=a1*a2;
    a3.DispI();
    a3=a1/a2;
    a3.DispI();
    return 0;
}