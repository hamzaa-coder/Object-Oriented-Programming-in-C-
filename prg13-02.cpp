//Catching All Exceptions
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class MyException : public exception{
    char msg[100];
    public:
    MyException(const char * msg){
        strcpy(this->msg,msg);
    }
    const char* what(){
        return msg;
    }
    void PrintError(){
        cout<<"Error : "<<endl;
    }
};
int main(){
    float i,j;
    cout<<"Give i and j "<<endl;
    cin>>i>>j;
    try{
        if(j==0){
            throw MyException("Div by Zero");
        }
        else{
            cout<<"Result = "<<i/j<<endl;
        }
    }
    catch(...){
        cout<<"Error "<<endl;
        exit(1);
    }
    getch();
    return 0;
}