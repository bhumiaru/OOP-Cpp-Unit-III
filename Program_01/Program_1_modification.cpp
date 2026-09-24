
#include <iostream>                         // Includes the input-output stream library
#include <string>                           // Includes the string library

int add(int first, int second) {            // Function for adding two integers
    return first + second;                  // Returns the sum
}

double add(double first, double second) {   // Function for adding two double values
    return first + second;                  // Returns the sum
}

int add(int first, int second, int third) { // Function for adding three integers
    return first + second + third;          // Returns the sum
}

std::string add(std::string first, std::string second) {
    // Overloaded add() function for joining two strings
    return first + second;                  // Joins the two strings and returns the result
}

int main() {                                // Main function

    std::cout << "Sum of two integers: "
              << add(10, 20) << '\n';
    // Calls add(int, int)

    std::cout << "Sum of two doubles: "
              << add(2.5, 3.7) << '\n';
    // Calls add(double, double)

    std::cout << "Sum of three integers: "
              << add(10, 20, 30) << '\n';
    // Calls add(int, int, int)

    std::cout << "Joined string: "
              << add(std::string("Hello "), std::string("World")) << '\n';
    // Calls add(string, string)
    // Joins "Hello " and "World"

    return 0;                               // Ends the program successfully
}
