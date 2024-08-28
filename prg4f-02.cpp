/*Shallow Copy and Deep Copy in Copy Constructor*/
#include<iostream>
using namespace std;
#include<conio.h>
class A{
    int i;
    int size;
    int *ptr;
    public:
    void SetI(int i){
        this->i=i;
    }
    void DispIPtr(){
        cout<<"i= "<<i<<endl;
        for(int j=0;j<size;j++){
            cout<<ptr[j]<<endl;
        }
    }
    A(){
        size=2;
        ptr=new int[size];
        ptr[0]=5;
        ptr[1]=7;
    }
    A(A & a){
        cout<<"Copy Constructor Called "<<endl;
        this->i=a.i;
        size=3;
        ptr=new int[size];
        ptr[0]=6;
        ptr[1]=8;
        ptr[2]=10;
    }
};
int main(){
    A a1;
    a1.SetI(10);
    a1.DispIPtr();
    A a2=a1;
    a2.DispIPtr();
    A a3(a2);
    a3.DispIPtr();
    getch();
    return 0;
}