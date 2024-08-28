#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class MyException: public exception
{
char msg [100];
public:
MyException(char * msg)
{
strcpy(this->msg, msg);
}
const char * what()
{
return msg;
}
void printError()
{
cout << "Error:" << msg << endl;}
};
void stopper()
{
cout << "uncaught exception,program terminated" << endl;
exit(1);
}
int main()
{
float i, j;
cout << "Give i and j" << endl;
set_terminate(stopper);
cin >> i >> j;
//try{
if (j==0) 
 throw MyException("Div by zero");
else
 cout << "Result = " << i/j << endl;
//}catch(...)
//{
// cout << "Errors" << endl;
//}
getch();
return 0;
}
