#include <iostream>
using namespace std;

// Base class
class Student {
public:
    void print() {
        cout << "I am a Student" << endl;
    }
};

// Derived class 1 from Student (Male)
class Male : public Student {
public:
    void print() {
        cout << "I am a Male Student" << endl;
    }
};

// Derived class 2 from Student (Female)
class Female : public Student {
public:
    void print() {
        cout << "I am a Female Student" << endl;
    }
};

// Derived class 3 from Male (Boy)
class Boy : public Male {
public:
    void print() {
        cout << "I am a Boy" << endl;
    }
};

// Derived class 4 from Female (Girl)
class Girl : public Female {
public:
    void print() {
        cout << "I am a Girl" << endl;
    }
};

int main() {
    Student student;
    Male male;
    Female female;
    Boy boy;
    Girl girl;

    student.print();  // Output: I am a Student
    male.print();     // Output: I am a Male Student
    female.print();   // Output: I am a Female Student
    boy.print();      // Output: I am a Boy
    girl.print();     // Output: I am a Girl

    return 0;
}
