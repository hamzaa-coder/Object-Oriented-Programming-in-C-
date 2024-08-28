//Student Scnerio using binary file reading and writing with menu
#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<string.h>
class Student
{
int rollno;
char name[30];
int marks;
public:
Student()
{
rollno = 0;
strcpy(name, "");
marks = 0;
}
Student (int rollno, char *name, int marks)
{
this->rollno = rollno;
strcpy(this->name,name);
this->marks = marks;
}
void setData(int rollno, char *name, int marks)
{
this->rollno = rollno;
strcpy(this->name,name);
this->marks = marks;
}
void inputData()
{
cout<< "Give student data" << endl;
cin >> rollno >> name >> marks;
}
void dispData()
{
cout << "rollno =" <<rollno << endl;
cout << "Name=" << name << endl;
cout << "Marks=" << marks << endl;
}
int getRollno()
{
return rollno;
}
char * getName()
{
return name;
}
int getMarks()
{
return marks;
}
};
void AddData()
{
Student s;
s.inputData();
ofstream ofs("student.bin", ios_base::app);
ofs.write(reinterpret_cast<char*>(&s), sizeof(s));
ofs.close();
cout << "Data successfully stored" << endl;
}
void DisplayData()
{
ifstream ifs ("student.bin");
Student s;
while (ifs.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
 cout << "*** The student data ***" << endl;
 s.dispData();
}
ifs.close();
}
void ModifyData()
{
int r;
cout << "Enter rollno whose record is to be modified" << endl;
cin >> r;
ifstream ifs ("student.bin");
ofstream ofs ("temp.bin");
Student s;
while (ifs.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
 if (s.getRollno() == r)
 {
s.inputData(); 
 }
 ofs.write (reinterpret_cast<char*> (&s), sizeof(s));
}
ifs.close();
ofs.close();
ofstream ofs2 ("student.bin");
ifstream ifs2 ("temp.bin");
while (ifs2.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
 ofs2.write (reinterpret_cast<char*> (&s), sizeof(s));
}
ifs2.close();
ofs2.close();
cout << "Data successfully modified" << endl;
}
void DeleteData()
{
int r;
cout << "Enter rollno whose record is to be deleted" << endl;
cin >> r;
ifstream ifs ("student.bin");
ofstream ofs ("temp.bin");
Student s;
while (ifs.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
 if (s.getRollno() != r)
 {
 ofs.write (reinterpret_cast<char*> (&s), sizeof(s));
 }
}
ifs.close();
ofs.close();
ofstream ofs2 ("student.bin");
ifstream ifs2 ("temp.bin");
while (ifs2.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
 ofs2.write (reinterpret_cast<char*> (&s), sizeof(s));
}
ifs2.close();
ofs2.close();
cout << "Data successfully deleted" << endl;
}
void DisplayHighest()
{
ifstream ifs ("student.bin");
Student s;
int count = 0;
while (ifs.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
count++;
}
ifs.close();
Student s2[count];
ifstream ifs2 ("student.bin");
int i = 0;
while (ifs2.read (reinterpret_cast<char*> (&s), sizeof(s)))
{
s2[i] = s;
i++;
}
ifs2.close();
int large = s2[0].getMarks();
int loc = 0;
for (i=1; i<count; i++)
{
if (s2[i].getMarks() > large)
{
large = s2[i].getMarks();
loc = i;
}
}
cout << "Student with the highest marks" << endl;
s2[loc].dispData();
}
int main()
{
char ch;
while (1)
{
cout <<"1. Add Student data" << endl;
cout <<"2. Display all Students data" << endl;
cout <<"3. Modify Student data" << endl;
cout <<"4. Delete Student data" << endl;
cout <<"5. Display student with highest marks" <<endl;
cout <<"6. Exit" << endl;
ch = getche();
cout << endl;
if (ch =='1')
 AddData();
else if (ch =='2')
DisplayData(); 
else if (ch =='3')
ModifyData();
else if (ch =='4')
DeleteData();
else if (ch =='5')
DisplayHighest();
else if (ch =='6')
break;
else 
cout << "Invalid option" << endl;
}
getch();
return 0;
}