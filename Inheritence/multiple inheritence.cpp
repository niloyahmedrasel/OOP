#include <iostream>
using namespace std;

class Engineer{
  protected:
  string specialized;
  
  public:
  
  void introduce(){
    cout<<"I am specialized in "<<specialized<<endl;
  }
};

class Teacher{
  protected:
  string subject;
  
  public:
  void work(){
    cout<<"I like to teach "<<subject<<endl;
  }
};

class Me:public Engineer,public Teacher{
  protected:
  string name;
  
  public:
  Me(string name,string subject,string specialized){
    this->name = name;
    this->subject = subject;
    this->specialized = specialized;
  }
  
  void display(){
    cout<<"My name is "<<name <<endl;
    introduce();
    work();
  }
  
};

int main() 
{
  Me obj("Rasel","Web","CSE");
  obj.display();
}
