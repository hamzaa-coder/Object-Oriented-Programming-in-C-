/*Early and late Binding including Runtime Morphism Concepts
(if we use VIRTUAL Keyword in base(parent) class then it is Late Binding,
if not then it's Early Binding)*/
#include<iostream>
using namespace std;
#include<conio.h>
class A{
    public:
    virtual void f1(){
        cout<<"F1 of A called "<<endl;
    }
};
class B : public A{
    public:
    void f1(){
        cout<<"F1 of B Called"<<endl;
    }
};
class C : public B{
    public:
    void f1(){
        cout<<"F1 of C called"<<endl;
    }
};
int main(){
    A* ptr;
    A a;
    B b;
    C c;
    ptr=&a;
    ptr->f1();
    ptr=&b;
    ptr->f1();
    ptr=&c;
    ptr->f1();
    getch();
    return 0;
}