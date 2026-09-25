
#include <iostream>                 // Includes the input-output stream library.
using namespace std;                // Allows us to use cout without std::.

class Shape {                       // Defines the base class Shape.
public:                             // Makes the following members public.
    virtual double area() const {   // Defines a virtual area function.
        return 0.0;                 // Returns the default area.
    }

    virtual ~Shape() = default;     // Defines a virtual destructor.
};

class Rectangle : public Shape {    // Rectangle inherits from Shape.
private:                            // Makes the data members private.
    double length;                  // Stores rectangle length.
    double width;                   // Stores rectangle width.

public:                             // Makes the constructor and function public.
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}
                                    // Initializes length and width.

    double area() const override {  // Overrides Shape::area().
        return length * width;      // Calculates rectangle area.
    }
};

class Circle : public Shape {       // Circle inherits from Shape.
private:                            // Makes the radius private.
    double radius;                  // Stores circle radius.

public:                             // Makes the constructor and function public.
    explicit Circle(double givenRadius) : radius(givenRadius) {}
                                    // Initializes radius.

    double area() const override {  // Overrides Shape::area().
        constexpr double PI = 3.141592653589793;
                                    // Defines the constant PI.
        return PI * radius * radius;// Calculates circle area.
    }
};

class Triangle : public Shape {     // Adds Triangle as another Shape.
private:                            // Makes Triangle data members private.
    double base;                    // Stores triangle base.
    double height;                  // Stores triangle height.

public:                             // Makes the constructor and function public.
    Triangle(double givenBase, double givenHeight)
        : base(givenBase), height(givenHeight) {}
                                    // Initializes base and height.

    double area() const override {  // Overrides Shape::area().
        return 0.5 * base * height; // Calculates triangle area.
    }
};

void printArea(const Shape& shape) { // Accepts a Shape reference.
    cout << "Area: " << shape.area() << '\n';
                                    // Calls the correct virtual area function.
}

int main() {                        // Program starts here.
    Rectangle rectangle(5.0, 3.0);  // Creates a rectangle.
    Circle circle(2.0);             // Creates a circle.
    Triangle triangle(6.0, 5.0);    // Creates a triangle.

    printArea(rectangle);           // Prints rectangle area.
    printArea(circle);              // Prints circle area.
    printArea(triangle);            // Prints triangle area.

    return 0;                       // Ends the program.
}
```
