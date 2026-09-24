
#include <iostream>                         // Includes the input-output stream library

int calculateArea(int side) {               // Function to calculate square area
    return side * side;                     // Returns square area
}

int calculateArea(int length, int width) {  // Function to calculate rectangle area
    return length * width;                  // Returns rectangle area
}

double calculateArea(double radius) {       // Function to calculate circle area
    constexpr double PI = 3.141592653589793; // Defines constant PI
    return PI * radius * radius;            // Returns circle area
}

double calculateArea(double base, double height) {
    // Overloaded function to calculate triangle area

    return 0.5 * base * height;             // Returns 1/2 × base × height
}

int main() {                                // Main function

    std::cout << "Square Area: "
              << calculateArea(5) << '\n';
    // Calls square area function

    std::cout << "Rectangle Area: "
              << calculateArea(6, 4) << '\n';
    // Calls rectangle area function

    std::cout << "Circle Area: "
              << calculateArea(2.0) << '\n';
    // Calls circle area function

    std::cout << "Triangle Area: "
              << calculateArea(5.0, 4.0) << '\n';
    // Calls triangle area function
    // Calculates 0.5 × 5 × 4 = 10

    return 0;                               // Ends the program successfully
}
