
#include <iostream>                         // Includes the input-output stream library

class Complex {                             // Defines a class named Complex

private:                                    // Starts the private section
    int real;                               // Stores the real part
    int imaginary;                          // Stores the imaginary part

public:                                     // Starts the public section

    Complex(int realPart = 0,               // Defines the constructor
            int imaginaryPart = 0)
        : real(realPart),                   // Initializes real with realPart
          imaginary(imaginaryPart) {}       // Initializes imaginary with imaginaryPart

    Complex operator+(const Complex& other) const {
        // Overloads the binary + operator

        return Complex(real + other.real,   // Adds real parts
                       imaginary + other.imaginary);
        // Adds imaginary parts and returns a new Complex object
    }

    void display() const {                  // Defines function to display complex number

        std::cout << real;                  // Displays the real part

        if (imaginary >= 0) {               // Checks whether imaginary part is positive
            std::cout << " + ";             // Displays plus sign
        } else {                            // Executes when imaginary part is negative
            std::cout << " - ";             // Displays minus sign
        }

        std::cout << (imaginary >= 0 ? imaginary : -imaginary)
                  << "i\n";                 // Displays absolute imaginary value followed by i
    }
};

int main() {                                // Starting point of the program

    Complex first(2, 3);                     // Creates first complex number 2 + 3i

    Complex second(4, 5);                    // Creates second complex number 4 + 5i

    Complex sum = first + second;            // Adds two complex numbers using overloaded +

    std::cout << "First complex number: ";
    // Displays first number message

    first.display();                         // Displays first complex number

    std::cout << "Second complex number: ";
    // Displays second number message

    second.display();                        // Displays second complex number

    std::cout << "Sum: ";                    // Displays sum message

    sum.display();                           // Displays the calculated sum

    return 0;                                // Ends the program successfully
}
