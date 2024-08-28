/*Write code with encapsulated class Student(rollno, name) with appropriate functions, constructors, 
and virtual destructor. Write StudentBCS(int FScMarks) class as child of Student class. Create object of 
StudentBCS class using pointer of Student class, delete the object and display the output.*/
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student{
    protected:
    int rollno;
    char name[20];
    public:
    Student(){
        rollno=0;
        strcpy(name,"");
    }
    Student(int rollno,const char* name){
        this->rollno=rollno;
        strcpy(this->name,name);
    }
    void SetData(int rollno,const char * name){
        this->rollno=rollno;
        strcpy(this->name,name);
    }
    void InputData(){
        cout<<"Give Data"<<endl;
        cin>>rollno>>name;
    }
    void DispData(){
        cout<<"Roll Number = "<<rollno<<endl;
        cout<<"Name =  "<<name<<endl; 
      }
      int GetRollno(){
        return rollno;
      }
      char* GetName(){
        return name;
      }
      virtual ~Student(){
        cout<<"Destructor of Parent Class Called"<<endl;
      }
};
class StudentBCS : public Student{
  int fscMarks;
  public:
  StudentBCS():Student(){
    fscMarks=0;
  }
  StudentBCS(int rollno,const char * name,int fscMarks):Student(rollno,name){
    this->fscMarks=0;
  }
  void SetData(int rollno,const char* name,int fscMarks){
    Student::SetData(rollno,name);
    this->fscMarks=fscMarks;
  }
  void InputData(){
    Student ::InputData();
    cin>>fscMarks;
  }
  void DispData(){
    Student::DispData();
    cout<<"Fsc Marks = "<<fscMarks<<endl;
  }
  int GetRollno(){
    return rollno;
  }
  char * GetName(){
    return name;
  }
  int GetFscmarks(){
    return fscMarks;
  }
  ~StudentBCS(){
    cout<<"Student BCS Object Destroyed"<<endl;
  }
};
int main(){
  Student *studentPtr=new StudentBCS(10,"hamza",700);
  studentPtr->DispData();
  delete studentPtr;
  getch();
  return 0;
}