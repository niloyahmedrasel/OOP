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
  //this function can only access the static value it can not access another values
  static void accessStatic(){
    cout<<customer_count;
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
    //so here we can see if the static value within the public we can access it but if it is private we can not access it 
    Customer::customer_count = 5;
    A.display();
    //so we can see that static can be apply on both value and function and static function can access only static values
    Customer::accessStatic()
}
