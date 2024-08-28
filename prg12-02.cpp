//Built In Exceptionss
#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    try{
        float*f=new float[999000000000];
        f[0]=5;
        cout<<f[0]<<endl;
        delete []f;
    }
    catch(bad_alloc ba){
        cout<<"In Catch Block : ";
        cout<<ba.what()<<endl;
    }
    getch();
    return 0;
}