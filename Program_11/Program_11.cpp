```cpp
#include <iostream>                 // Includes the input-output stream library.
using namespace std;                // Allows use of cout without std::.

class Shape {                       // Defines the abstract base class.
public:                             // Makes the following members public.
    virtual double area() const = 0;
                                    // Declares a pure virtual area function.
    virtual ~Shape() = default;     // Defines a virtual destructor.
};

class Rectangle : public Shape {    // Rectangle inherits from Shape.
private:                            // Makes data members private.
    double length;                  // Stores rectangle length.
    double width;                   // Stores rectangle width.

public:                             // Makes the constructor and area public.
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}
                                    // Initializes length and width.

    double area() const override {  // Implements the pure virtual function.
        return length * width;      // Calculates rectangle area.
    }
};

int main() {                        // Program starts here.
    Rectangle rectangle(8.0, 4.0);  // Creates a Rectangle object.

    cout << "Rectangle Area: "
         << rectangle.area() << '\n';
                                    // Displays the rectangle area.

    return 0;                       // Ends the program.
}
```
