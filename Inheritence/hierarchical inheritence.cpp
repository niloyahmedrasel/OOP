#include <iostream>
using namespace std;

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
class Teacher:public Human{
  int salary,id;
  
  public:
  Teacher(string name,int age,int salary,int id){
    this->name = name;
    this->age = age;
    this->salary = salary;
    this->id = id;
    
  }
  
  void display(){
    cout<<name << " "<<age <<" "<<salary << " "<<id<<endl;
  }
};

int main() 
{
  Student A("rasel",25,1,5);
  A.display();
  Teacher obj("rasel",25,10000,5);
  obj.display();
}
