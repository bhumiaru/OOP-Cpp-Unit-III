
#include <iostream>                         // Includes the input-output stream library

class Number {                              // Defines a class named Number

private:                                    // Starts the private section
    int value;                              // Declares private integer variable value

public:                                     // Starts the public section

    explicit Number(int givenValue) : value(givenValue) {}
    // Constructor of Number class
    // explicit prevents unwanted implicit conversion
    // givenValue is the value passed to the constructor
    // value(givenValue) initializes value

    Number operator-() const {
        // Overloads the unary minus (-) operator
        // const means this function does not modify the object

        return Number(-value);
        // Creates a new Number object with negative value
    }

    void display() const {
        // Defines display() function
        // const means this function does not modify the object

        std::cout << value << '\n';
        // Displays the value
        // '\n' moves to the next line
    }
};

int main() {                                // Main function

    Number first(25);
    // Creates Number object named first
    // Stores 25 in value

    Number second = -first;
    // Calls the overloaded unary minus operator
    // Changes 25 to -25
    // Stores the result in second

    std::cout << "Original value: ";
    // Displays the message

    first.display();
    // Displays original value 25

    std::cout << "Negated value: ";
    // Displays the message

    second.display();
    // Displays negated value -25

    return 0;                               // Ends the program successfully
}
```
