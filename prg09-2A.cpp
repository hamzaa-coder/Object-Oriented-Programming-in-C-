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
    Book*b;
    b=new Book[10];
    int i;
    cout<<"Enter data"<<endl;
    for(i=0;i<10;i++){
        (b+i)->InputData();
    }
    int lowest=(b+0)->GetPrice();
    int loc=0;
    for(i=1;i<10;i++){
        if((b+i)->GetPrice()<lowest){
            lowest=(b+i)->GetPrice();
            loc=i;
        }
        cout<<"Data Of Book Having lowest price is "<<endl;
        (b+loc)->DispData();
        delete []b;
        getch();
        return 0;
    }
}
