Static Data Members:
A static variable inside a class belongs to the class, not to individual objects.
All objects share the same copy of the static variable.
Static variables are created once and stay in memory as long as the program runs.

Example:
static int customer_count;
Every object of the Customer class will share this customer_count. It’s like having a global variable for the class, not for each object.
Static Member Functions:
A static function in a class can only access static members (variables or other static functions).
It doesn’t need an object to be called—can be called using just the class name.

Example:
static int getCustomerCount() {
    return customer_count;
}

You can call this function like Customer::getCustomerCount(); without needing to create a Customer object.
Static Local Variables (inside functions):
A static variable in a function keeps its value between function calls.
It is initialized only the first time the function is called.
  
Example:
void exampleFunction() {
    static int count = 0;
    count++;
    cout << count;
}
Every time you call exampleFunction(), count will remember its previous value.
