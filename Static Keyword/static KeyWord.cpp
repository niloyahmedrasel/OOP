#include <iostream>
using namespace std;

class Customer{
  string name;
  int account_number,balance;
  static int customer_count;
  
  public:
  Customer(string name,int account_number,int balance){
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
    customer_count++;
  }
  
  void display(){
    cout<<name <<" "<<account_number << " " <<balance <<" "<<customer_count<<endl;
  }
  
};

int Customer::customer_count = 0;

int main() 
{
    Customer A("Rasel",1,1000);
    Customer B("Sakib",2,2000);
    A.display();
    B.display();
}
