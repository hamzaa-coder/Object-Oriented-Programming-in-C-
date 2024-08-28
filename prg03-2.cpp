#include<iostream>
using namespace std;
#include<cstring>
#include<conio.h>
class Book{
    int bid;
    char title[30];
    int price;
    public:
    void SetData(int bd,const char* te,int pe){
        bid=bd;
        strcpy(title,te);
        price=pe;
    }
    void DispData(){
        cout<<"B I'D = "<<bid<<endl;
        cout<<"Title = "<<title<<endl;
        cout<<"Price = "<<price<<endl;
    }
    void InputData(){
        cout<<"Give Data Of Books"<<endl;
        cin>>bid>>title>>price;
    }
    int GetBid(){
        return bid;
    }
    char* GetTitle(){
        return title;
    }
    int GetPrice(){
        return price;
    }
};
int main(){
    Book b1,b2;
    b1.InputData();
    b2.InputData();
    b1.DispData();
    b2.DispData();
    b1.SetData(173,"abc",400);
    b1.DispData();
    getch();
    return 0;
}
