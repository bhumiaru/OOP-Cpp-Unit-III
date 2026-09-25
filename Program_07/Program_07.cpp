
#include <iostream>                         // Includes the input-output stream library

class Complex {                             // Defines a class named Complex

private:                                    // Starts the private section of the class
    int real;                               // Stores the real part
    int imaginary;                          // Stores the imaginary part

public:                                     // Starts the public section of the class

    Complex(int realPart = 0,               // Defines the constructor
            int imaginaryPart = 0)
        : real(realPart),                   // Initializes real with realPart
          imaginary(imaginaryPart) {}       // Initializes imaginary with imaginaryPart

    friend Complex operator+(int value, const Complex& number);
    // Declares operator+ as a friend function
    // It allows an integer to be added to a Complex object

    void display() const {                  // Defines function to display complex number

        std::cout << real;                  // Displays the real part

        if (imaginary >= 0) {               // Checks whether imaginary part is positive
            std::cout << " + ";             // Displays plus sign
        } else {                            // Executes when imaginary part is negative
            std::cout << " - ";             // Displays minus sign
        }

        std::cout << (imaginary >= 0 ? imaginary : -imaginary)
                  << "i\n";                 // Displays imaginary part followed by i
    }
};

Complex operator+(int value, const Complex& number) {
    // Defines the friend operator+ function

    return Complex(value + number.real,     // Adds integer value to real part
                   number.imaginary);       // Keeps the imaginary part unchanged
}

int main() {                                // Starting point of the program

    Complex number(2, 3);                    // Creates Complex object with 2 + 3i

    Complex result = 10 + number;             // Adds integer 10 to Complex number

    std::cout << "Result: ";                  // Displays result message

    result.display();                        // Displays the resulting complex number

    return 0;                                // Ends the program successfully
}

```
