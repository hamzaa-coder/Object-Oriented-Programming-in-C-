#include<iostream>
using namespace std;
#include<conio.h>
class A{
    int i;
    friend void function1();
};
void function1(){
    A a;
    a.i=10;
    cout<<"a.i = "<<a.i<<endl;
}
int main(){
    function1();
    getch();
    return 0;
}