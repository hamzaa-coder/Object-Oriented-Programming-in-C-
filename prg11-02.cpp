//try catch statements
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int main(){
   int i,j;
   cout<<"Give i and j"<<endl;
   cin>>i>>j;
   try{
    if(j==0)
    throw string("zero not allowed");
    else
    cout<<"Result = "<<i/j<<endl;
   }
   catch(string s){
    cout<<s<<endl;
   }
   getch();
   return 0;
}