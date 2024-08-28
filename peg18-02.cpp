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
    A operator ++(void);
    A operator ++(int);
};
A A::operator++(void){
    A temp;
    ++temp.i;
    return temp;
}
A A::operator++(int){
    A temp;
    temp.i+=1;;
    return temp;
}
int main(){
    A a;
    a.SetI(10);
    ++a;
    a.DispI();
    a++;
    a.DispI();
    getch();
    return 0;
}