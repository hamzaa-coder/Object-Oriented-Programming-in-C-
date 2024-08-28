//Example 2 for String Processing
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int main()
{
 // C++ string class
string s1;
string s2("abcdef");
string s3;
cout <<"Give input s2 with spaces" << endl;
getline(cin, s2); // reads embedded blanks
cout <<"s2:" << s2 << endl;
cout << "Give s3" << endl;
cin >> s3; // terminated by space
cout <<"S3=" << s3 << endl;
cout << "Enter multiple lines" << endl;
getline (cin, s1, '$'); // read multiple lines
cout << "s1=" << s1 << endl;
s3 = s1 + s2;
cout <<"s3=" << s3 << endl;
char ar1[80];
int w = s3.length();
s3.copy(ar1, w, 0);
ar1[w] = 0;
cout << "char array:" << ar1 << endl;
getch();
return 0;
}
