//Writing Data to a Text File
#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
ofstream ofs ("f1.txt");
ofs << "First Line " << endl;
ofs << "Second line" << endl;
ofs << "Third line" << endl;
ofs.close();
getch();
return 0;
}
