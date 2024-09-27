#include <iostream>
using namespace std;


class Modifier{
  public:
  int a;
  
  protected:
  int b;
  
  private:
  int c;
};

int main() 
{
   Modifier rasel;
   
   //we can access public outside the class means we can use it on external functions
   rasel.a = 10;
   
   //we can not use protected data in any external function but if there is any derived class who extends parent class that class can access proteced data
   rasel.b = 10;//not allowed
   
   //we can not use private data in any external function or any derived class
   
   resel.c = 10;//not allowed
}
