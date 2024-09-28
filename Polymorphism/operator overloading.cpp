#include <iostream>  // Required for input-output operations
using namespace std;

// Define a class 'Complex' to represent complex numbers
class Complex {
    int real, img;  // Private data members to hold the real and imaginary parts

public:
    // Default constructor (optional here, but can be used for uninitialized objects)
    Complex() {
        // No initialization here; could initialize to zero if needed
    }
    
    // Parameterized constructor to initialize a complex number with given real and imaginary parts
    Complex(int real, int img) {
        // 'this' pointer is used to refer to the object's own members
        this->real = real;  // Set the real part
        this->img = img;    // Set the imaginary part
    }
    
    // Function to display the complex number in the format: real + i(imaginary)
    void display() {
        cout << real << "+i" << img << endl;
    }
    
    // Operator overloading of '+' to add two complex numbers
    // The return type is Complex, and it takes a reference to another Complex object as input
    Complex operator + (Complex &C) {
        Complex result;  // Create a new Complex object to store the result
        result.real = real + C.real;  // Add the real parts of both complex numbers
        result.img = img + C.img;     // Add the imaginary parts of both complex numbers
        return result;  // Return the result as a Complex object
    }
};

int main() {
    // Create two Complex objects with real and imaginary parts initialized via the parameterized constructor
    Complex C1(3, 4);  // Represents the complex number 3 + i4
    Complex C2(4, 5);  // Represents the complex number 4 + i5
    
    // Add C1 and C2 using the overloaded '+' operator and store the result in C3
    Complex C3 = C1 + C2;
    
    // Display the result of the addition, which should be 7 + i9
    C3.display();
    
    return 0;  // End of the program
}
