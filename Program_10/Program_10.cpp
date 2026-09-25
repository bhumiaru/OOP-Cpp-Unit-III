
#include <iostream>                 // Includes the input-output stream library.
using namespace std;                // Allows us to use cout without std::.

class Shape {                       // Defines the base class Shape.
public:                             // Makes the following members public.
    virtual double area() const {   // Defines a virtual function named area.
        return 0.0;                 // Returns 0.0 from the base implementation.
    }

    virtual ~Shape() = default;     // Defines a virtual destructor.
};

class Rectangle : public Shape {    // Rectangle inherits from Shape.
private:                            // Makes the following data members private.
    double length;                  // Stores the rectangle length.
    double width;                   // Stores the rectangle width.

public:                             // Makes the constructor and function public.
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {} // Initializes length and width.

    double area() const override {  // Overrides the virtual area function.
        return length * width;      // Returns rectangle area.
    }
};

class Circle : public Shape {       // Circle inherits from Shape.
private:                            // Makes the following data member private.
    double radius;                  // Stores the circle radius.

public:                             // Makes the constructor and function public.
    explicit Circle(double givenRadius) : radius(givenRadius) {}
                                    // Initializes the radius.

    double area() const override {  // Overrides the virtual area function.
        constexpr double PI = 3.141592653589793;
                                    // Defines a constant value for PI.
        return PI * radius * radius;// Returns circle area.
    }
};

void printArea(const Shape& shape) { // Accepts a Shape object by reference.
    cout << "Area: " << shape.area() << '\n';
                                    // Calls the appropriate virtual area function.
}

int main() {                        // Program execution starts here.
    Rectangle rectangle(5.0, 3.0);  // Creates a Rectangle object.
    Circle circle(2.0);              // Creates a Circle object.

    printArea(rectangle);            // Sends rectangle to printArea.
    printArea(circle);               // Sends circle to printArea.

    return 0;                        // Ends the program successfully.
}

