//string processing in c++
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int main()
{
 // C-style strings(Array of Characters)
 char str1[80];
 cout <<"Give str1 input" << endl;
 cin >> str1;
 cout <<"Str1=" << str1 << endl;
 cin.ignore();
int k = strcmp("Abc", "abc");
int k2 = strcmpi("Abc", "abc");
cout << "k=" << k << "k2=" << k2 << endl;
strcpy(str1, "firstabcd");
cout << str1[0] << endl;
cout << strlen(str1) << endl;
cout << str1[ strlen(str1)-1 ] << endl;
cout << "Give str1 input with spaces"<< endl;
cin.get(str1, 80);
cout << "You input:" << str1 << endl;
cin.ignore();
string str00(str1);
cout << "String:" << str00 << endl;
getch();
return 0;
}