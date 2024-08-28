#include<iostream>
using namespace std;
#include<conio.h>
class Parent{
    protected:
    int baseData;
};
class child1 : virtual public Parent{};
class child2 : virtual public Parent{};
class grandChild : public child1,public child2{
    public:
    int getData(){
        return baseData;
    }
    void setData(int bd){
        baseData=bd;
    }
};
int main(){
    grandChild gc1;
    gc1.setData(10);
    cout<<"Data = "<<gc1.getData()<<endl;
    getch();
    return 0;
}