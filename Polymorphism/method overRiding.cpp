#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void sound() = 0;  // No implementation in the base class

    // Virtual destructor
    virtual ~Animal() {}
};

// Derived class: Dog
class Dog : public Animal {
public:
    // Override the sound method
    void sound() override {
        cout << "Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    // Override the sound method
    void sound() override {
        cout << "Meow!" << endl;
    }
};

// Function to demonstrate run-time polymorphism
void makeSound(Animal* animal) {
    animal->sound();  // Calls the overridden method based on the object type
}

int main() {
    Dog dog;                // Create a Dog object
    Cat cat;                // Create a Cat object

    // Use base class pointers to refer to derived class objects
    Animal* animal1 = &dog; // Pointer of type Animal pointing to Dog object
    Animal* animal2 = &cat; // Pointer of type Animal pointing to Cat object

    makeSound(animal1);  // Outputs: Woof!
    makeSound(animal2);  // Outputs: Meow!

    return 0;  // End of the program
}
