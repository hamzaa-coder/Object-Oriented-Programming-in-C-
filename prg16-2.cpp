#include<iostream>
using namespace std;
#include<conio.h>
class A{
    public:
    A(){
        cout<<"A No Arguments"<<endl;
    }
    A(int i){
        cout<<"A Int Arguments "<<endl;
    }
    ~A(){
        cout<<"A Destructor "<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"B no Arguments "<<endl;
    }
    B(int i){
        cout<<"B Int Arguments "<<endl;
    }
    ~B(){
        cout<<"B Destructor"<<endl;
    }
};
class C:public B{
    public:
    C(){
        cout<<"C No Arguments "<<endl;
    }
    C(int i){
        cout<<"C Int Arguments "<<endl;
    }
    ~C(){
        cout<<"C Destructor "<<endl;
    }
};
int main(){
    C c;
    B b(5);
    getch();
    return 0;
}