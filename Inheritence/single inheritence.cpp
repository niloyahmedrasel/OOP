#include <iostream>
using namespace std;

//parent class constructor will call first then derived class constructor will call
//derived class destructure will call first than parent class destructure will call

//if there is a same name function in both parent and derived class then derived class funcion will call 
class Human{
  
  protected:
  string name;
  int age;
 
};

class Student:public Human{
  int roll,id;
  
  public:
  Student(string name,int age,int roll,int id){
    this->name = name;
    this->age = age;
    this->roll = roll;
    this->id = id;
    
  }
  
  void display(){
    cout<<name << " "<<age <<" "<<roll << " "<<id<<endl;
  }
};

int main() 
{
  Student A("rasel",25,1,5);
  A.display();
}
