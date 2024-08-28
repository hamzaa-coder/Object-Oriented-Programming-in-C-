#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
int main(){
    vector <int> v(3);
    v[0]=5;
    v[1]=6;
    v[2]=7;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    v.push_back(8);
    vector <int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
    getch();
    return 0;
}