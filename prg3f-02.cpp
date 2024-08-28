/*Overloading Arthematic assignment Operators +=,-+,*=   */
#include<iostream>
using namespace std;
#include<conio.h>
class A{
    int i;
    public:
    void SetI(int i){
        this->i=i;
    }
    void DispI(){
        cout<<"i= "<<i<<endl;
    }
    A operator +=(A a0);
    A operator -=(A a0);
    A operator *=(A a0);
};
A A::operator +=(A a0){
    this->i=this->i+a0.i;
    return *this;
}
A A::operator -=(A a0){
    this->i=this->i-a0.i;
}
A A::operator *=(A a0){
    this->i=this->i*a0.i;
}
int main(){
    A a1,a2,a3;
    a1.SetI(10);
    a2.SetI(20);
    a3.SetI(30);
    a1+=a2;
    a1.DispI();
    a2-=a1;
    a2.DispI();
    a3*=a1;
    a3.DispI();
    getch();
    return 0;
}
