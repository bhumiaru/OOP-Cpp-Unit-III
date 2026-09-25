
#include <iostream>                 // Includes the input-output stream library.
#include <memory>                   // Includes smart pointer support.
#include <vector>                   // Includes vector support.
using namespace std;                // Allows use of standard names without std::.

class Shape {                       // Defines the abstract base class.
public:                             // Makes the following members public.
    virtual double area() const = 0;
                                    // Declares a pure virtual area function.
    virtual void displayName() const = 0;
                                    // Declares a pure virtual displayName function.
    virtual ~Shape() = default;     // Defines a virtual destructor.
};

class Rectangle : public Shape {    // Rectangle inherits from Shape.
private:                            // Makes data members private.
    double length;                  // Stores rectangle length.
    double width;                   // Stores rectangle width.

public:                             // Makes constructor and functions public.
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}
                                    // Initializes length and width.

    double area() const override {  // Implements the area function.
        return length * width;      // Calculates rectangle area.
    }

    void displayName() const override {
                                    // Implements displayName.
        cout << "Rectangle";        // Displays Rectangle.
    }
};

class Circle : public Shape {       // Circle inherits from Shape.
private:                            // Makes radius private.
    double radius;                  // Stores circle radius.

public:                             // Makes constructor and functions public.
    explicit Circle(double givenRadius) : radius(givenRadius) {}
                                    // Initializes radius.

    double area() const override {  // Implements area.
        constexpr double PI = 3.141592653589793;
                                    // Defines PI.
        return PI * radius * radius;// Calculates circle area.
    }

    void displayName() const override {
                                    // Implements displayName.
        cout << "Circle";           // Displays Circle.
    }
};

int main() {                        // Program starts here.
    vector<unique_ptr<Shape>> shapes;
                                    // Creates a vector of Shape smart pointers.

    shapes.push_back(make_unique<Rectangle>(5.0, 3.0));
                                    // Adds a Rectangle object to the vector.

    shapes.push_back(make_unique<Circle>(2.0));
                                    // Adds a Circle object to the vector.

    for (const auto& shape : shapes) {
                                    // Loops through every Shape pointer.
        shape->displayName();       // Displays the actual shape name.
        cout << " Area: " << shape->area() << '\n';
                                    // Displays the actual shape area.
    }

    return 0;                       // Ends the program.
}

