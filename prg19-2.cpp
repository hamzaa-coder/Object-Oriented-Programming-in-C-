#include<iostream>
#include<conio.h>
using namespace std;
class A{
    int i;
    public:
    void setI(int i){
        this->i=i;
    }
    void DispI(){
        cout<<"i= "<<i<<endl;
    }
    A operator++(void);
    A operator++(int);
};
A A::operator++(void){
    A temp;
    temp.i=i;
    ++temp.i;
    return temp;
}
A A::operator++(int){
    i++;
    return *this;
}
int main(){
    A a;
    a.setI(10);
    ++a;
    a.DispI();
    a++;
    a.DispI();
    getch();
    return 0;

}