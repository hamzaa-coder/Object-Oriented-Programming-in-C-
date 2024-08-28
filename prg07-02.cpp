//pure virtual function and abstract class
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A{
    public:
    virtual void f1()=0;
};
class B : public A{
    public:
    void f1(){
        cout<<"F1 of B called"<<endl;
    }
};
class C : public A{
    public:
    void f1(){
        cout<<"F1 of C called"<<endl;
    }
};
int main(){
    A *ptr;
    B b;
    C c;
    ptr=&b;
    ptr->f1();
    ptr=&c;
    ptr->f1();
    getch();
    return 0;
}