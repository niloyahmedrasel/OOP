#include <iostream>
using namespace std;

 
class Person{
  protected:
  string name;
  
  public:
  void introduce(){
    cout<<"Hi my name is "<<name<<endl;
  }
};

class Employee:public Person{
  protected:
  int salary;
  
  public:
  void monthlySalary(){
    cout<<"My salary is "<<salary<<endl;
  }
};

class Manager:public Employee{
  protected:
  string department;
  
  public:
  Manager(string name,int salary,string department){
    this->name = name;
    this->salary = salary;
    this->department = department;
  }
  
  void display(){
    cout<<name <<" " <<salary << " "<<department<<endl;
  }
  
};

int main() 
{
  Manager A("rasel",20000,"engineer");
  A.display();
  A.monthlySalary();
  A.introduce();
}
