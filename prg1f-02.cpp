/*General Program to overload Insertion << and Extraction >> operators*/
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
    friend ostream & operator <<(ostream & os,const A & a);
    friend istream & operator >>(istream & is,A & a);
};
ostream & operator <<(ostream & os,const A &a ){
    os<<a.i<<endl;
    return os;
}
istream & operator >>(istream & is,A & a){
    cout<<"Give i "<<endl;
    is>>a.i;
    return is;
}
int main(){
    A a;
    cin>>a;
    cout<<"a = "<<a<<endl;
    getch();
    return 0;
}
