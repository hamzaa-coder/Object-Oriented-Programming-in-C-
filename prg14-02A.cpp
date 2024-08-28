/*Write code to define your exception that generates an error message "Invalid even number". Use it in 
main function which inputs 5 integers, and if any of the integers is even, the exception is generated , 
and the program continues for complete input. */
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class MyException : public exception{
  char msg[100];
  public:
  MyException(const char * msg){
    strcpy(this->msg,msg);
  }
  const char* what(){
    return msg;
  }
  void PrintError(){
    cout<<"Invalid Even Number : "<<msg<<endl;
  }
};
int main(){
  int numbers[5];
  cout<<"Enter Numbers "<<endl;
  try{
    for(int i=0;i<5;i++){
    cin>>numbers[i];
    if(numbers[i]%2==0){
      throw MyException("Integer is Even ");
    }
  }
  }
  catch(MyException me){
    cout<<me.what()<<endl;
    me.PrintError();
  }
  getch();
  return 0;
}