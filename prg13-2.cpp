#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class student{
    protected:
	int rollno;
	char name[30];
	student(){
		rollno=0;
		strcpy(name,"");
	}
	student(int rollno,char* name){
		this->rollno=rollno;
		strcpy(this->name,name);
	}
	void SetData(int rollno,char* name){
		this->rollno=rollno;
		strcpy(this->name,name);
	}
	void DispData(){
		cout<<"Roll no = "<<rollno<<endl;
		cout<<"Name = "<<name<<endl;
	}
	void InputData(){
		cout<<"Give Roll no "<<endl;
		cin>>rollno;
		cout<<"Give Name "<<endl;
		cin>>name;
	}
	int GetRollno(){
		return rollno;
	}
	char* GetName(){
		return name;
	}
	~student(){
		cout<<"Student Object Destroyed "<<endl;
	}
};
class studentBSC:public student{
	int fscMarks;
	public:
		studentBSC():student(){
			fscMarks=0;
		}
		studentBSC(int rollno,char*name,int fscMarks):student(rollno,name){
			this->fscMarks=fscMarks;
		}
		void SetData(int rollno,char*name,int fscMarks){
			student::SetData(rollno,name);
			this->fscMarks=fscMarks;
		}
		void DispData(){
			student::DispData();
			cout<<"Fsc Marks = "<<fscMarks<<endl;
		}
		void InputData(){
			student::InputData();
			cout<<"Give Fsc Marks"<<endl;
			cin>>fscMarks;
		}
		int GetRollno(){
		student::GetRollno();			
		}
		char* GetName(){
			student::GetName();
		}
		int GetFscMarks(){
			return fscMarks;
		}
		~studentBSC(){
			cout<<"Student BSC Object Destroyed"<<endl;
		}
};
class studentMCS:public student{
	int bscMarks;
	public:
		studentMCS():student(){
			bscMarks=0;
		}
		studentMCS(int rollno,char*name,int bscMarks):student(rollno,name){
			this->bscMarks=bscMarks;
		}
		void SetData(int rollno,char*name,int bscMarks){
			student::SetData(rollno,name);
			this->bscMarks=bscMarks;
		}
		void DispData(){
			student::DispData();
			cout<<"BSC Marks = "<<bscMarks<<endl;
		}
		void InputData(){
			student::InputData();
			cout<<"Give BSC Marks "<<endl;
			cin>>bscMarks;
		}
		int GetRollno(){
			student::GetRollno();
		}
		char* GetName(){
			student::GetName();
		}
		int GetBscMarks(){
			return bscMarks;
		}
		~studentMCS(){
			cout<<"Student MCS Object Destroyed "<<endl;
		}
};
int main(){
	studentBSC sb1;
	studentMCS sm1;
	sb1.InputData();
	sm1.SetData(12,"haseeb",1500);
	sb1.DispData();
	sm1.DispData();
	getch();
	return 0;
}
