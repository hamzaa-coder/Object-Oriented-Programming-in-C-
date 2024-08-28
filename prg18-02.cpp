//example of using stack in c++
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<stack>
// There is no iterator for stack
int main()
{
stack <int> v;
v.push(1);
v.push(2);
v.push(3);
v.pop();
while (!v.empty())
{
cout << v.top() << endl;
v.pop();
}
getch();
return 0;
}