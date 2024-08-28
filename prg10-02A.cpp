/*Write code with encapsulated class Student(rollno, name) with appropriate functions, constructors, 
and virtual destructor. Write StudentBCS(int FScMarks) and StudentMCS(int BScmarks) classes as 
children of Student class. Create another class StudentMS as child of both with dispdata function 
displaying rollno, name, FScMarks, BscMarks. Call dispdata in the main function and display the 
output*/
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
class StudentMCS : public Student{
  int bcsMarks;
  public:
  StudentMCS():Student(){
    bcsMarks=0;
  }
  StudentMCS(int rollno,const char * name,int bcsMarks):Student(rollno,name){
    this->bcsMarks=0;
  }
  void SetData(int rollno,const char* name,int fscMarks){
    Student::SetData(rollno,name);
    this->bcsMarks=fscMarks;
  }
  void InputData(){
    Student ::InputData();
    cin>>bcsMarks;
  }
  void DispData(){
    Student::DispData();
    cout<<"BCS Marks = "<<bcsMarks<<endl;
  }
  int GetRollno(){
    return rollno;
  }
  char * GetName(){
    return name;
  }
  int GetBCSmarks(){
    return bcsMarks;
  }
  ~StudentMCS(){
    cout<<"Student MCS Object Destroyed"<<endl;
  }
};
class StudentMS : public StudentBCS, public StudentMCS {
public:
    StudentMS(int rollno, const char* name, int fscMarks, int bcsMarks) : StudentBCS(rollno, name, fscMarks), StudentMCS(rollno, name, bcsMarks) {}
    void DispData() {
        StudentBCS::DispData();
        StudentMCS::DispData();
    }
    void InputData() {
        StudentBCS::InputData();
        StudentMCS::InputData();
    }
};
int main(){
    StudentMS ms1(123,"hamza",123,123);
    ms1.DispData();
    getch();
    return 0;
}