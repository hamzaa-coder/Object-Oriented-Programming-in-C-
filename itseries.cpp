#include<iostream>
using namespace std;
class A {
    int i;
    public:
    void seti(int i){
        this->i=i;
    }
    void dispi(){
        cout<<"i = "<<i<<endl;
    }
    A operator +(A a0){
        A temp;
        temp.i=a0.i+i;
        return temp;
    }
    A operator -(A a0){
        A temp;
        temp.i=a0.i-i;
        return temp;
    }
};
int main(){
    A x,y,z;
    x.seti(10);
    y.seti(20);
    z=x+y;
    z.dispi();
    z=x-y;
    z.dispi();
    return 0;
}