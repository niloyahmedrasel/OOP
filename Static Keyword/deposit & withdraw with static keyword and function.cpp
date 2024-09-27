#include <iostream>
using namespace std;

class Customer{
  string name;
  int account_number,balance;
  static int customer_count;
  static int total_balance;
  
  
  public:
  
  Customer(string name,int account_number,int balance){
    this->name = name;
    this->account_number = account_number;
    this->balance = balance;
    customer_count++;
    total_balance += balance;
  }
  
  static void accessStatic(){
    cout<<customer_count<<endl;
    cout<<"total balance: " <<total_balance;
    
  }
  
  void deposit(int amount){
    if(amount>0){
      balance +=amount;
      total_balance += amount;
    }
  }
  
  void withdraw(int amount){
    if(amount>0 && amount<=balance){
      balance -=amount;
      total_balance -= amount;
    }
  }
  
  void display(){
    cout<<name <<" "<<account_number << " " <<balance <<" "<<customer_count<<endl;
  }
  
};

int Customer::customer_count = 0;
int Customer::total_balance = 0;

int main() 
{
    Customer A("Rasel",1,1000);
    Customer B("Sakib",2,2000);
    A.display();
    B.display();
    
    A.withdraw(1000);
    B.deposit(1000);
    B.withdraw(500);
    
    Customer::accessStatic();
}
