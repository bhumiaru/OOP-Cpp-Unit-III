
#include <iostream>                         // Includes the input-output stream library

class Complex {                             // Defines a class named Complex

private:                                    // Starts the private section
    int real;                               // Stores the real part
    int imaginary;                          // Stores the imaginary part

public:                                     // Starts the public section

    Complex(int realPart = 0,               // Defines the constructor
            int imaginaryPart = 0)
        : real(realPart),                   // Initializes real part
          imaginary(imaginaryPart) {}       // Initializes imaginary part

    Complex operator+(const Complex& other) const {
        // Overloads the binary + operator

        return Complex(real + other.real,   // Adds real parts
                       imaginary + other.imaginary);
        // Adds imaginary parts
    }

    Complex operator-(const Complex& other) const {
        // Overloads the binary - operator

        return Complex(real - other.real,   // Subtracts real parts
                       imaginary - other.imaginary);
        // Subtracts imaginary parts and returns a new object
    }

    void display() const {                  // Defines function to display complex number

        std::cout << real;                  // Displays real part

        if (imaginary >= 0) {               // Checks whether imaginary part is positive
            std::cout << " + ";             // Displays plus sign
        } else {                            // Executes when imaginary part is negative
            std::cout << " - ";             // Displays minus sign
        }

        std::cout << (imaginary >= 0 ? imaginary : -imaginary)
                  << "i\n";                 // Displays imaginary value and i
    }
};

int main() {                                // Starting point of the program

    Complex first(2, 3);                     // Creates first complex number

    Complex second(4, 5);                    // Creates second complex number

    Complex difference = first - second;     // Subtracts second from first

    std::cout << "First complex number: ";
    // Displays first number message

    first.display();                         // Displays first complex number

    std::cout << "Second complex number: ";
    // Displays second number message

    second.display();                        // Displays second complex number

    std::cout << "Difference: ";             // Displays difference message

    difference.display();                    // Displays the result of subtraction

    return 0;                                // Ends the program successfully
}
