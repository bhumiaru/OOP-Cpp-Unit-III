
#include <iostream>                 // Includes the input-output stream library.
using namespace std;                // Allows use of cout without std::.

class Shape {                       // Defines the abstract base class.
public:                             // Makes members public.
    virtual double area() const = 0;
                                    // Declares the pure virtual area function.
    virtual ~Shape() = default;     // Defines a virtual destructor.
};

class Rectangle : public Shape {    // Rectangle inherits from Shape.
private:                            // Makes data members private.
    double length;                  // Stores rectangle length.
    double width;                   // Stores rectangle width.

public:                             // Makes constructor and area public.
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}
                                    // Initializes length and width.

    double area() const override {  // Implements Shape::area().
        return length * width;      // Calculates rectangle area.
    }
};

class Triangle : public Shape {     // Adds Triangle derived from Shape.
private:                            // Makes Triangle data members private.
    double base;                    // Stores triangle base.
    double height;                  // Stores triangle height.

public:                             // Makes constructor and area public.
    Triangle(double givenBase, double givenHeight)
        : base(givenBase), height(givenHeight) {}
                                    // Initializes base and height.

    double area() const override {  // Implements Shape::area().
        return 0.5 * base * height; // Calculates triangle area.
    }
};

int main() {                        // Program starts here.
    Rectangle rectangle(8.0, 4.0); // Creates a Rectangle object.
    Triangle triangle(6.0, 5.0);   // Creates a Triangle object.

    cout << "Rectangle Area: "
         << rectangle.area() << '\n';
                                    // Displays rectangle area.

    cout << "Triangle Area: "
         << triangle.area() << '\n';
                                    // Displays triangle area.

    return 0;                       // Ends the program.
}

