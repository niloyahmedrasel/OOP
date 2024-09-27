#include <iostream>
using namespace std;

// Base class
class Human {
public:
    void print() {
        cout << "I am a Human" << endl;
    }
};

// Derived class 1 (inheriting from Human virtually)
class Engineer : virtual public Human {
public:
    void print() {
        cout << "I am an Engineer" << endl;
    }
};

// Derived class 2 (inheriting from Human virtually)
class Teacher : virtual public Human {
public:
    void print() {
        cout << "I am a Teacher" << endl;
    }
};

// Derived class 3 (inheriting from both Engineer and Teacher)
class Me : public Engineer, public Teacher {
public:
    void print() {
        cout << "I am Me" << endl;
    }
};

int main() {
    Me me;
    me.print();              // Output: I am Me

    me.Engineer::print();    // Output: I am an Engineer
    me.Teacher::print();     // Output: I am a Teacher

    // Accessing Human class's print function
    me.Human::print();       // Output: I am a Human

    return 0;
}
