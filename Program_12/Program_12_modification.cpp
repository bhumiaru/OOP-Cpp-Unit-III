
#include <iostream>                 // Includes the input-output stream library.
#include <memory>                   // Includes smart pointer support.
#include <vector>                   // Includes vector support.
using namespace std;                // Allows use of standard names without std::.

class Shape {                       // Defines the abstract base class.
public:                             // Makes members public.
    virtual double area() const = 0;
                                    // Declares pure virtual area.
    virtual void displayName() const = 0;
                                    // Declares pure virtual displayName.
    virtual ~Shape() = default;     // Defines virtual destructor.
};

class Rectangle : public Shape {    // Rectangle inherits from Shape.
private:                            // Makes data members private.
    double length;                  // Stores length.
    double width;                   // Stores width.

public:                             // Makes members public.
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}
                                    // Initializes length and width.

    double area() const override {  // Implements area.
        return length * width;      // Calculates rectangle area.
    }

    void displayName() const override {
                                    // Implements displayName.
        cout << "Rectangle";        // Displays Rectangle.
    }
};

class Circle : public Shape {       // Circle inherits from Shape.
private:                            // Makes radius private.
    double radius;                  // Stores radius.

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

class Triangle : public Shape {     // Adds Triangle derived from Shape.
private:                            // Makes Triangle data members private.
    double base;                    // Stores triangle base.
    double height;                  // Stores triangle height.

public:                             // Makes constructor and functions public.
    Triangle(double givenBase, double givenHeight)
        : base(givenBase), height(givenHeight) {}
                                    // Initializes base and height.

    double area() const override {  // Implements area.
        return 0.5 * base * height; // Calculates triangle area.
    }

    void displayName() const override {
                                    // Implements displayName.
        cout << "Triangle";         // Displays Triangle.
    }
};

int main() {                        // Program starts here.
    vector<unique_ptr<Shape>> shapes;
                                    // Creates a vector of Shape smart pointers.

    shapes.push_back(make_unique<Rectangle>(5.0, 3.0));
                                    // Adds Rectangle.

    shapes.push_back(make_unique<Circle>(2.0));
                                    // Adds Circle.

    shapes.push_back(make_unique<Triangle>(6.0, 5.0));
                                    // Adds Triangle.

    for (const auto& shape : shapes) {
                                    // Loops through all Shape objects.
        shape->displayName();       // Displays the actual shape name.
        cout << " Area: " << shape->area() << '\n';
                                    // Displays the actual shape area.
    }

    return 0;                       // Ends the program.
}

