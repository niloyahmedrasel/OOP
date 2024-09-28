#include <iostream>
using namespace std;

//here we can see that there are two same name function but with the help of function overloading there is no issue
//in compile time it checks the function and if the function have different parameter then there is no issue
//polymorphism have 2 part first compile time and second run time and function overloading is a part of compile time

class Area{
  public:
  
  int calculateArea(int r){
    return 3.14*r*r;
  }
  
  int calculateArea(int l,int b){
    return l*b;
  }
};

int main() 
{
    Area A1;
    cout<< A1.calculateArea(3)<<endl;
    cout<< A1.calculateArea(3,4)<<endl;
    return 0;
}
